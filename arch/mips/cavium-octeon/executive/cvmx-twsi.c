/***********************license start***************
 * Author: Cavium Inc.
 *
 * Contact: support@cavium.com
 * This file is part of the OCTEON SDK
 *
 * Copyright (c) 2003-2010 Cavium Inc.
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
 * Contact Cavium Inc. for more information
 ***********************license end**************************************/
#include <linux/export.h>
#include <linux/i2c.h>

#include <asm/octeon/octeon.h>
#include <asm/octeon/cvmx-twsi.h>

struct i2c_adapter *__cvmx_twsix_get_adapter(int twsi_id)
{
	struct i2c_adapter *adapter;
	int i2c_id;

	i2c_id = octeon_i2c_cvmx2i2c(twsi_id);
	if (i2c_id < 0)
		return NULL;

	adapter = i2c_get_adapter(i2c_id);

	return adapter;
}
EXPORT_SYMBOL(__cvmx_twsix_get_adapter);


/**
 * Do a twsi read from a 7 bit device address using an (optional) internal address.
 * Up to 8 bytes can be read at a time.
 *
 * @twsi_id:   which Octeon TWSI bus to use
 * @dev_addr:  Device address (7 bit)
 * @internal_addr:
 *                  Internal address.  Can be 0, 1 or 2 bytes in width
 * @num_bytes: Number of data bytes to read
 * @ia_width_bytes:
 *                  Internal address size in bytes (0, 1, or 2)
 * @data:      Pointer argument where the read data is returned.
 *
 * Returns read data returned in 'data' argument
 *         Number of bytes read on success
 *         -1 on failure
 */
int cvmx_twsix_read_ia(int twsi_id, uint8_t dev_addr, uint16_t internal_addr, int num_bytes, int ia_width_bytes, uint64_t * data)
{
	struct i2c_adapter *adapter;
	u8 data_buf[8];
	u8 addr_buf[8];
	struct i2c_msg msg[2];
	uint64_t r;
	int i, j;

	if (ia_width_bytes == 0)
		return cvmx_twsix_read(twsi_id, dev_addr, num_bytes, data);

	BUG_ON(ia_width_bytes > 2);
	BUG_ON(num_bytes > 8 || num_bytes < 1);

	adapter = __cvmx_twsix_get_adapter(twsi_id);
	if (adapter == NULL)
		return -1;

	for (j = 0, i = ia_width_bytes - 1; i >= 0; i--, j++)
		addr_buf[j] = (u8) (internal_addr >> (i * 8));

	msg[0].addr = dev_addr;
	msg[0].flags = 0;
	msg[0].len = ia_width_bytes;
	msg[0].buf = addr_buf;

	msg[1].addr = dev_addr;
	msg[1].flags = I2C_M_RD;
	msg[1].len = num_bytes;
	msg[1].buf = data_buf;

	i = i2c_transfer(adapter, msg, 2);

	i2c_put_adapter(adapter);

	if (i == 2) {
		r = 0;
		for (i = 0; i < num_bytes; i++)
			r = (r << 8) | data_buf[i];
		*data = r;
		return num_bytes;
	} else {
		return -1;
	}
}

EXPORT_SYMBOL(cvmx_twsix_read_ia);

/**
 * Read from a TWSI device (7 bit device address only) without generating any
 * internal addresses.
 * Read from 1-8 bytes and returns them in the data pointer.
 *
 * @twsi_id:   TWSI interface on Octeon to use
 * @dev_addr:  TWSI device address (7 bit only)
 * @num_bytes: number of bytes to read
 * @data:      Pointer to data read from TWSI device
 *
 * Returns Number of bytes read on success
 *         -1 on error
 */
int cvmx_twsix_read(int twsi_id, uint8_t dev_addr, int num_bytes, uint64_t * data)
{
	struct i2c_adapter *adapter;
	u8 data_buf[8];
	struct i2c_msg msg[1];
	uint64_t r;
	int i;

	BUG_ON(num_bytes > 8 || num_bytes < 1);

	adapter = __cvmx_twsix_get_adapter(twsi_id);
	if (adapter == NULL)
		return -1;

	msg[0].addr = dev_addr;
	msg[0].flags = I2C_M_RD;
	msg[0].len = num_bytes;
	msg[0].buf = data_buf;

	i = i2c_transfer(adapter, msg, 1);

	i2c_put_adapter(adapter);

	if (i == 1) {
		r = 0;
		for (i = 0; i < num_bytes; i++)
			r = (r << 8) | data_buf[i];
		*data = r;
		return num_bytes;
	} else {
		return -1;
	}
}

/**
 * Perform a twsi write operation to a 7 bit device address.
 *
 * Note that many eeprom devices have page restrictions regarding address boundaries
 * that can be crossed in one write operation.  This is device dependent, and this routine
 * does nothing in this regard.
 * This command does not generate any internal addressess.
 *
 * @twsi_id:   Octeon TWSI interface to use
 * @dev_addr:  TWSI device address
 * @num_bytes: Number of bytes to write (between 1 and 8 inclusive)
 * @data:      Data to write
 *
 * Returns 0 on success
 *         -1 on failure
 */
int cvmx_twsix_write(int twsi_id, uint8_t dev_addr, int num_bytes, uint64_t data)
{
	struct i2c_adapter *adapter;
	u8 data_buf[8];
	struct i2c_msg msg[1];
	int i, j;

	BUG_ON(num_bytes > 8 || num_bytes < 1);

	adapter = __cvmx_twsix_get_adapter(twsi_id);
	if (adapter == NULL)
		return -1;

	for (j = 0, i = num_bytes - 1; i >= 0; i--, j++)
		data_buf[j] = (u8) (data >> (i * 8));

	msg[0].addr = dev_addr;
	msg[0].flags = 0;
	msg[0].len = num_bytes;
	msg[0].buf = data_buf;

	i = i2c_transfer(adapter, msg, 1);

	i2c_put_adapter(adapter);

	if (i == 1)
		return num_bytes;
	else
		return -1;
}

/**
 * Write 1-8 bytes to a TWSI device using an internal address.
 *
 * @twsi_id:   which TWSI interface on Octeon to use
 * @dev_addr:  TWSI device address (7 bit only)
 * @internal_addr:
 *                  TWSI internal address (0, 8, or 16 bits)
 * @num_bytes: Number of bytes to write (1-8)
 * @ia_width_bytes:
 *                  internal address width, in bytes (0, 1, 2)
 * @data:      Data to write.  Data is written MSB first on the twsi bus, and only the lower
 *                  num_bytes bytes of the argument are valid.  (If a 2 byte write is done, only
 *                  the low 2 bytes of the argument is used.
 *
 * Returns Number of bytes read on success,
 *         -1 on error
 */
int cvmx_twsix_write_ia(int twsi_id, uint8_t dev_addr, uint16_t internal_addr, int num_bytes, int ia_width_bytes, uint64_t data)
{
	struct i2c_adapter *adapter;
	u8 data_buf[8];
	u8 addr_buf[8];
	struct i2c_msg msg[2];
	int i, j;

	if (ia_width_bytes == 0)
		return cvmx_twsix_write(twsi_id, dev_addr, num_bytes, data);

	BUG_ON(ia_width_bytes > 2);
	BUG_ON(num_bytes > 8 || num_bytes < 1);

	adapter = __cvmx_twsix_get_adapter(twsi_id);
	if (adapter == NULL)
		return -1;

	for (j = 0, i = ia_width_bytes - 1; i >= 0; i--, j++)
		addr_buf[j] = (u8) (internal_addr >> (i * 8));

	for (j = 0, i = num_bytes - 1; i >= 0; i--, j++)
		data_buf[j] = (u8) (data >> (i * 8));

	msg[0].addr = dev_addr;
	msg[0].flags = 0;
	msg[0].len = ia_width_bytes;
	msg[0].buf = addr_buf;

	msg[1].addr = dev_addr;
	msg[1].flags = 0;
	msg[1].len = num_bytes;
	msg[1].buf = data_buf;

	i = i2c_transfer(adapter, msg, 2);

	i2c_put_adapter(adapter);

	if (i == 2) {
		/* Poll until reads succeed, or polling times out */
		int to = 100;
		while (to-- > 0) {
			uint64_t data;
			if (cvmx_twsix_read(twsi_id, dev_addr, 1, &data) >= 0)
				break;
		}
	}

	if (i == 2)
		return num_bytes;
	else
		return -1;
}

