/*************************************************************************
 *
 * Author: Cavium Inc.
 *
 * Contact: support@cavium.com
 * This file is part of the OCTEON SDK
 *
 * Copyright (c) 2010 - 2014 Cavium, Inc.
 *
 * This file is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, Version 2, as
 * published by the Free Software Foundation.
 *
 * This file is distributed in the hope that it will be useful, but
 * AS-IS and WITHOUT ANY WARRANTY; without even the implied warranty
 * of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE, TITLE, or
 * NONINFRINGEMENT.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this file; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
 * or visit http://www.gnu.org/licenses/.
 *
 * This file may also be available under a different license from Cavium.
 * Contact Cavium, Inc. for more information
 *************************************************************************/

#include <linux/module.h>
#include <linux/init.h>
#include <linux/sched.h>
#include <linux/fs.h>
#include <linux/semaphore.h>
#include <linux/platform_device.h>
#include <linux/of.h>
#include <linux/of_irq.h>
#include <linux/of_address.h>
#include <linux/interrupt.h>

#include <asm/octeon/octeon.h>
#include <asm/octeon/cvmx-ocla.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Carlos Munoz <cmunoz@caviumnetworks.com>");
MODULE_DESCRIPTION("Octeon On Chip Logig Analizer driver");
MODULE_SUPPORTED_DEVICE("cn70xx/cn78xx");


/* Dynamic allocation of the major device number */
#define OCLA_MAJOR		0

#define DEVICE_NAME		"octeon-ocla"
#define MAX_OCLA_IRQS		2


/* Ocla comlex states */
enum {
	COMPLEX_INVALID,
	COMPLEX_FREE,
	COMPLEX_IN_USE
};

/*
 * irq_info:			Contains the information needed to handle irqs.
 *
 *  irq:			Virtual irq number.
 *  en:				Irq state: 1=enabled, 0=disabled.
 */
struct irq_info {
	int			irq;
	int			en;
};

/*
 * ocla_complex:		Information needed to manage each ocla complex.
 *
 *  node:			Node the ocla complex is on.
 *  ix:				Ocla complex index.
 *  state:			Current ocla complex state.
 *  data_avail:			Indicates capture data is available. Set to 1 by
 *				the interrupt handler. Set to 0 by the read
 *				method when all entries have been read.
 *  waitq:			Wait queue to support blocking io.
 *  pdev:			Pointer to platform device structure for this
 *				ocla complex.
 *  irqs:			IRQs used by this ocla complex.
 *  lock:			Spin lock.
 */
struct ocla_complex {
	int			node;
	int			ix;
	int			state;
	int			data_avail;
	wait_queue_head_t	waitq;
	struct platform_device	*pdev;
	spinlock_t		lock;
	struct irq_info		irqs[MAX_OCLA_IRQS];
};


static int ocla_major = OCLA_MAJOR;
static DEFINE_SEMAPHORE(complexes_sem);
static struct ocla_complex ocla_complexes[CVMX_MAX_NODES][MAX_COMPLEXES] = {
	{ {.state = COMPLEX_INVALID}, {.state = COMPLEX_INVALID},
	  {.state = COMPLEX_INVALID}, {.state = COMPLEX_INVALID},
	  {.state = COMPLEX_INVALID} },
	{ {.state = COMPLEX_INVALID}, {.state = COMPLEX_INVALID},
	  {.state = COMPLEX_INVALID}, {.state = COMPLEX_INVALID},
	  {.state = COMPLEX_INVALID} }
};

/*
 * Process ocla interrutps.
 * To mitigate interrupt overhead an approach similar to the one use by NAPI is
 * implemented:
 * 	. Readers enable the ocla interrupts and block waiting for captured
 *	  entries.
 *	. The interrupt handler is invoked when there's captured data. It
 *	  disables the interrupt and wakes up any blocked readers.
 *	. The readers read all entries. Enable the ocla interrupts and block
 *	  again.
 *
 *  irq:			Interrupt to process.
 *  dev_id:			Pointer to ocla complex.
 *
 *  returns:			Indication interrupt was handled.
 */
static irqreturn_t  ocla_irq_handler(int	irq,
				     void	*dev_id)
{
	struct ocla_complex	*complex = dev_id;
	unsigned long		flags;
	int			i;

	/* Clear the interrupts */
	cvmx_ocla_clear_interrupts(complex->node, complex->ix);

	/* Disable the irq */
	spin_lock_irqsave(&complex->lock, flags);
	disable_irq_nosync(irq);
	for (i = 0; i < MAX_OCLA_IRQS; i++) {
		if (irq == complex->irqs[i].irq) {
			complex->irqs[i].en = 0;
			break;
		}
	}
	complex->data_avail = 1;
	spin_unlock_irqrestore(&complex->lock, flags);

	wake_up_interruptible(&complex->waitq);

	return IRQ_HANDLED;
}

/*
 * Read captured entries.
 * To mitigate interrupt overhead an approach similar to the one use by NAPI is
 * implemented:
 * 	. Readers enable the ocla interrupts and block waiting for captured
 *	  entries.
 *	. The interrupt handler is invoked when there's captured data. It
 *	  disables the interrupt and wakes up any blocked readers.
 *	. The readers read all entries, enable interrupts again when there
 *	  are no more entries to read, and block waiting for new enties.
 *
 *  file:			Pointer to file structure.
 *  buf:			Buffer to fill with the captured entries.
 *  count:			Size of buf.
 *  off:			File offset. Updated with amount of data read.
 *
 *  returns:			Number of bytes read, or error.
 */
static ssize_t ocla_read(struct file *file, char __user *buf, size_t count,
			 loff_t *off)
{
	struct ocla_complex	*complex;
	ssize_t			read_cnt = 0;
	unsigned long		flags;
	uint64_t		data;
	int			node;
	int			ix;
	int			i;

	complex = (struct ocla_complex *)file->private_data;

	if (count < 8)
		return -EINVAL;

	if (complex == NULL) {
		printk(KERN_ERR "OCLA: Capture is not enabled\n");
		return -EPERM;
	}

	node = complex->node;
	ix = complex->ix;

	/* Block if no data is available */
	if (!complex->data_avail) {
		/* No data available, enable interrupts and wait */
		if (file->f_flags & O_NONBLOCK)
			return -EAGAIN;

		spin_lock_irqsave(&complex->lock, flags);
		for (i = 0; i < MAX_OCLA_IRQS; i++) {
			if (!complex->irqs[i].en) {
				enable_irq(complex->irqs[i].irq);
				complex->irqs[i].en = 1;
			}
		}
		spin_unlock_irqrestore(&complex->lock, flags);

		if (wait_event_interruptible(complex->waitq,
					     complex->data_avail == 1))
			return -ERESTARTSYS;
	}

	/* Indicate data is not available before trying to empty the fifo */
	complex->data_avail = 0;

	/* Try to read as many entries as possible */
	while (read_cnt <= count - 8) {
		if (cvmx_ocla_get_packet(node, ix, &data) < 0)
			break;
		if (copy_to_user(buf + read_cnt, (char *)&data, 8))
			return -EFAULT;
		read_cnt += 8;
	}

	/* Indicate data is available if the fifo is not yet empty */
	if (read_cnt)
		complex->data_avail = 1;

	*off += read_cnt;
	/* If the buffer is full, we've reached the end of file */
	if (!read_cnt && cvmx_is_fifo_full(node, ix))
		read_cnt = -ENOSPC;

	return read_cnt;
}

/*
 * Process a capture request.
 *
 *  file:			Pointer to file structure.
 *  req:			Capture request.
 *
 *  returns:			0 on success, error otherwise.
 */
static long ioctl_cap_req(struct file		*file,
			  struct cap_req	*req)
{
	struct ocla_complex	*complex;

	/* Verify arguments */
	if (req->node >= CVMX_MAX_NODES || req->ix >= MAX_COMPLEXES)
		return -EINVAL;

	/* Make sure complex is available */
	complex = &ocla_complexes[req->node][req->ix];
	if (complex->state != COMPLEX_FREE)
		return -EINVAL;

	complex->state = COMPLEX_IN_USE;
	file->private_data = complex;

	return 0;
}

/*
 * Process ioctl commands.
 *
 *  file:			Pointer to file structure.
 *  cmd:			Ioctl command.
 *  arg:			Ioctl command argument.
 *
 *  returns:			0 on success, error otherwise.
 */
static long ocla_ioctl(struct file	*file,
		       unsigned int 	cmd,
		       unsigned long	arg)
{
	struct cap_req	req;
	long		rc = 0;

	switch (cmd) {
	case OCLA_CAP_REQ:
		if (copy_from_user(&req, (void __user *)arg, sizeof(req)))
			return -EFAULT;

		rc = ioctl_cap_req(file, &req);
		break;

	default:
		printk(KERN_ERR "OCLA: Invalid ioctl cmd [%x]\n", cmd);
		rc = -EINVAL;
		break;
	}

	return rc;
}

/*
 * Open file request.
 *
 *  inode:			Pointer to inode structure.
 *  file:			Pointer to file structure.
 *
 *  returns:			0 on success, error otherwise.
 */
static int ocla_open(struct inode	*inode,
		     struct file	*file)
{
	/* No ocla complex currently in use */
	file->private_data = NULL;

	return 0;
}

/*
 * Close file request.
 *
 *  inode:			Pointer to inode structure.
 *  file:			Pointer to file structure.
 *
 *  returns:			0 on success, error otherwise.
 */
static int ocla_release(struct inode *inode, struct file *file)
{
	struct ocla_complex	*complex;
	unsigned long		flags;

	complex = (struct ocla_complex *)file->private_data;

	if (complex) {
		int	i;

		/* Disable the interrupts */
		spin_lock_irqsave(&complex->lock, flags);
		for (i = 0; i < MAX_OCLA_IRQS; i++) {
			if (complex->irqs[i].en) {
				disable_irq(complex->irqs[i].irq);
				complex->irqs[i].en = 0;
			}
		}
		complex->data_avail = 0;
		spin_unlock_irqrestore(&complex->lock, flags);

		complex->state = COMPLEX_FREE;
	}

	return 0;
}

/*
 * Probe the ocla complex specified in pdev.
 *
 *  pdev:			Pointer to platform_device structure.
 *
 *  returns:			0 on success, error otherwise.
 */
static int __init ocla_probe(struct platform_device *pdev)
{
	struct ocla_complex	*complex;
	const __be32		*zero_addr;
	const u32		*reg;
	u64			base_addr;
	int			node;
	int			ix;
	struct resource		*res;
	int			irq;
	unsigned long		flags;
	int			i;
	int			j;
	int			rc = -1;

	/* Get the node this complex is on */
	zero_addr = of_get_address(pdev->dev.of_node, 0, NULL, NULL);
	base_addr = of_translate_address(pdev->dev.of_node, zero_addr);
	base_addr = (u64)phys_to_virt(base_addr);
	node = (base_addr >> 36) & 3;

	/* Get the index of the ocla complex being initialized */
	reg = of_get_property(pdev->dev.of_node, "reg", NULL);
	if (!reg) {
		printk(KERN_ERR "ocla: No 'reg' property, aborting\n");
		return -ENODEV;
	}
	ix = (reg[1] >> 24) & 7;

	/* Initialize the ocla complex information */
	complex = &ocla_complexes[node][ix];
	platform_set_drvdata(pdev, complex);
	complex->node = node;
	complex->ix = ix;
	complex->state = COMPLEX_FREE;
	complex->data_avail = 0;
	init_waitqueue_head(&complex->waitq);
	complex->pdev = pdev;
	spin_lock_init(&complex->lock);

	/* Register the interrupt handlers */
	for (i = 0; i < pdev->num_resources; i++) {
		if ((res = platform_get_resource(pdev, IORESOURCE_IRQ, i))) {
			irq = irq_of_parse_and_map(pdev->dev.of_node, i);
			if (irq) {
				if ((rc = request_irq(irq, ocla_irq_handler, 0,
						      DEVICE_NAME, complex))) {
					printk(KERN_ERR "ocla: failed to "
					       "request irq\n");
					for (j = 0; j < i; j++)
						free_irq(complex->irqs[j].irq,
							 complex);
					return rc;
				}
				complex->irqs[i].irq = irq;

				/*
				 * Interrupts are disabled until we have a
				 * reader. The reader will enable interrupts
				 * before blocking.
				 */
				spin_lock_irqsave(&complex->lock, flags);
				disable_irq(irq);
				complex->irqs[i].en = 0;
				spin_unlock_irqrestore(&complex->lock, flags);
			}
		}
	}

	return 0;
}

/*
 * Remove ocla complex specified in pdev.
 *
 *  pdev:			Pointer to platform_device structure.
 *
 *  returns:			0 on success, error otherwise.
 */
static int __exit ocla_remove(struct platform_device *pdev)
{
	struct ocla_complex	*complex;
	int			i;

	complex = platform_get_drvdata(pdev);
	for (i = 0; i < MAX_OCLA_IRQS; i++)
		free_irq(complex->irqs[i].irq, complex);

	return 0;
}

static const struct file_operations ocla_fops = {
	.open		= ocla_open,
	.unlocked_ioctl = ocla_ioctl,
	.read		= ocla_read,
	.release	= ocla_release,
};

static const struct of_device_id ocla_of_match_table[] = {
        { .compatible = "cavium,octeon-7xxx-ocla", },
        {}
};

static struct platform_driver ocla_driver = {
        .probe          = ocla_probe,
        .remove         = ocla_remove,
        .driver         = {
                .owner  = THIS_MODULE,
                .name   = "ocla",
                .of_match_table = ocla_of_match_table,
        },
};

static int __init ocla_init(void)
{
	int	rc;

	/* Register the platform driver */
	if ((rc = platform_driver_register(&ocla_driver))) {
		printk(KERN_ERR "ocla: failed to register platform driver\n");
		return rc;
	}

	/* Register the character device */
	if ((rc = register_chrdev(ocla_major, DEVICE_NAME, &ocla_fops)) < 0) {
		printk(KERN_ERR "ocla: can't register major %d\n", ocla_major);
		platform_driver_unregister(&ocla_driver);
		return rc;
	}
	if (!ocla_major)
		ocla_major = rc;

        return 0;
}

static void __exit ocla_exit(void)
{
        platform_driver_unregister(&ocla_driver);
	unregister_chrdev(ocla_major, DEVICE_NAME);
}

module_init(ocla_init);
module_exit(ocla_exit);
