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

/**
 * @file
 *
 * Interface to the TWSI / I2C bus
 *
 * Note: Currently on 7 bit device addresses are supported
 *
 *
 */

#ifndef __CVMX_TWSI_H__
#define __CVMX_TWSI_H__



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
int cvmx_twsix_read_ia(int twsi_id, uint8_t dev_addr, uint16_t internal_addr, int num_bytes, int ia_width_bytes, uint64_t * data);

/**
 * A convenience wrapper function around cvmx_twsix_read_ia() that
 * only supports 8 bit internal addresses.
 * Reads up to 7 bytes, and returns both the value read or error
 * value in the return value
 *
 * @twsi_id:   which Octeon TWSI bus to use
 * @dev_addr:  Device address (7 bit only)
 * @internal_addr:
 *                  Internal address (8 bit only)
 * @num_bytes: Number of bytes to read (0-7)
 *
 * Returns Value read from TWSI on success
 *         -1 on error
 */
static inline int64_t cvmx_twsix_read_ia8(int twsi_id, uint8_t dev_addr, uint8_t internal_addr, int num_bytes)
{
	uint64_t data;
	if (num_bytes < 1 || num_bytes > 7)
		return -1;
	if (cvmx_twsix_read_ia(twsi_id, dev_addr, internal_addr, num_bytes, 1, &data) < 0)
		return -1;
	return data;
}

/**
 * A convenience wrapper function around cvmx_twsix_read_ia() that
 * only supports 16 bit internal addresses.
 * Reads up to 7 bytes, and returns both the value read or error
 * value in the return value
 *
 * @twsi_id:   which Octeon TWSI bus to use
 * @dev_addr:  Device address (7 bit only)
 * @internal_addr:
 *                  Internal address (16 bit only)
 * @num_bytes: Number of bytes to read (0-7)
 *
 * Returns Value read from TWSI on success
 *         -1 on error
 */ static inline int64_t cvmx_twsix_read_ia16(int twsi_id, uint8_t dev_addr, uint16_t internal_addr, int num_bytes)
{
	uint64_t data;
	if (num_bytes < 1 || num_bytes > 7)
		return -1;
	if (cvmx_twsix_read_ia(twsi_id, dev_addr, internal_addr, num_bytes, 2, &data) < 0)
		return -1;
	return data;
}

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
int cvmx_twsix_read(int twsi_id, uint8_t dev_addr, int num_bytes, uint64_t * data);

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
int cvmx_twsix_write(int twsi_id, uint8_t dev_addr, int num_bytes, uint64_t data);

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
int cvmx_twsix_write_ia(int twsi_id, uint8_t dev_addr, uint16_t internal_addr, int num_bytes, int ia_width_bytes, uint64_t data);

/***********************************************************************
** Functions below are deprecated, and not recomended for use.
** They have been superceded by more flexible functions that are
** now provided.
************************************************************************/

/**
 * Read 8-bit from a device on the TWSI / I2C bus
 *
 * @twsi_id:  Which TWSI bus to use. CN3XXX, CN58XX, and CN50XX only
 *                 support 0. CN56XX and CN57XX support 0-1.
 * @dev_addr: I2C device address (7 bit)
 * @internal_addr:
 *                 Internal device address
 *
 * Returns 8-bit data or < 0 in case of error
 */
static inline int cvmx_twsix_read8(int twsi_id, uint8_t dev_addr, uint8_t internal_addr)
{
	return cvmx_twsix_read_ia8(twsi_id, dev_addr, internal_addr, 1);
}

/**
 * Read 8-bit from a device on the TWSI / I2C bus
 *
 * Uses current internal address
 *
 * @twsi_id:  Which TWSI bus to use. CN3XXX, CN58XX, and CN50XX only
 *                 support 0. CN56XX and CN57XX support 0-1.
 * @dev_addr: I2C device address (7 bit)
 *
 * Returns 8-bit value or < 0 in case of error
 */
static inline int cvmx_twsix_read8_cur_addr(int twsi_id, uint8_t dev_addr)
{
	uint64_t data;

	if (cvmx_twsix_read(twsi_id, dev_addr, 1, &data) < 0)
		return -1;
	return (data & 0xff);
}

/**
 * Write 8-bit to a device on the TWSI / I2C bus
 *
 * @twsi_id:  Which TWSI bus to use. CN3XXX, CN58XX, and CN50XX only
 *                 support 0. CN56XX and CN57XX support 0-1.
 * @dev_addr: I2C device address (7 bit)
 * @internal_addr:
 *                 Internal device address
 * @data:     Data to be written
 *
 * Returns 0 on success and < 0 in case of error
 */
static inline int cvmx_twsix_write8(int twsi_id, uint8_t dev_addr, uint8_t internal_addr, uint8_t data)
{
	if (cvmx_twsix_write_ia(twsi_id, dev_addr, internal_addr, 1, 1, data) < 0)
		return -1;
	return 0;
}

/**
 * Read 8-bit from a device on the TWSI / I2C bus zero.
 *
 * This function is for compatibility with SDK 1.6.0 and
 * before which only supported a single TWSI bus.
 *
 * @dev_addr: I2C device address (7 bit)
 * @internal_addr:
 *                 Internal device address
 *
 * Returns 8-bit data or < 0 in case of error
 */
static inline int cvmx_twsi_read8(uint8_t dev_addr, uint8_t internal_addr)
{
	return cvmx_twsix_read8(0, dev_addr, internal_addr);
}

/**
 * Read 8-bit from a device on the TWSI / I2C bus zero.
 *
 * Uses current internal address
 *
 * This function is for compatibility with SDK 1.6.0 and
 * before which only supported a single TWSI bus.
 *
 * @dev_addr: I2C device address (7 bit)
 *
 * Returns 8-bit value or < 0 in case of error
 */
static inline int cvmx_twsi_read8_cur_addr(uint8_t dev_addr)
{
	return cvmx_twsix_read8_cur_addr(0, dev_addr);
}

/**
 * Write 8-bit to a device on the TWSI / I2C bus zero.
 * This function is for compatibility with SDK 1.6.0 and
 * before which only supported a single TWSI bus.
 *
 * @dev_addr: I2C device address (7 bit)
 * @internal_addr:
 *                 Internal device address
 * @data:     Data to be written
 *
 * Returns 0 on success and < 0 in case of error
 */
static inline int cvmx_twsi_write8(uint8_t dev_addr, uint8_t internal_addr, uint8_t data)
{
	return cvmx_twsix_write8(0, dev_addr, internal_addr, data);
}


#endif /*  __CVMX_TWSI_H__ */
