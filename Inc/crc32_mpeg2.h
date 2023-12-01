/** @file
 * @brief	CRC32/MPEG-2 Algorithm header file
 *
 * @defgroup crc32_mpeg2 CRC32/MPEG-2 Algorithm module
 * @{
 *
 * @brief	This module provides the function required to calculate the CRC32/MPEG-2 Algorithm on one or more bytes.
 *
 * @author 	EmbeTronicX (<a href=https://github.com/Embetronicx/STM32-Bootloader/tree/ETX_Bootloader_3.0>STM32-Bootloader GitHub Repository under ETX_Bootloader_3.0 branch</a>)
 * @author	César Miranda Meza
 * @date	November 17, 2023.
 */
#include <stdint.h> // This library contains the aliases: uint8_t, uint16_t, uint32_t, etc.

#ifndef CRC32_MPEG2_H_
#define CRC32_MPEG2_H_

/**@brief   Calculates the 32-bit CRC of a given data.
 *
 * @note	If the length in bytes of the data from which it is being requested to calculate the 32-bit CRC is either
 *          that of \c 0 or \c 0xFFFFFFFF , then this function will not calculate the 32-bit CRC and will return the
 *          value of \c 0xFFFFFFFF instead.
 *
 * @param[in] p_data    Pointer to the data from which it is desired to calculate the 32-bit CRC.
 * @param data_length   Length in bytes of the \p p_data param.
 *
 * @return              The calculated 32-bit CRC Hash Function on the input data towards which the \p p_data param
 *                      points to.
 *
 * @author 	EmbeTronicX (<a href=https://github.com/Embetronicx/STM32-Bootloader/tree/ETX_Bootloader_3.0>STM32-Bootloader GitHub Repository under ETX_Bootloader_3.0 branch</a>)
 * @author	César Miranda Meza
 * @date	November 17, 2023
 */
uint32_t crc32_mpeg2(uint8_t *p_data, uint32_t data_length);

#endif /* CRC32_MPEG2_H_ */

/** @} */
