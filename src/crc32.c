#include <stdint.h>
#include <stddef.h>
#include "crc32.h"

uint32_t crc32_checksum(const uint8_t *data, size_t length)
{
	uint32_t lutable[256] = CRC32_PRCMP_TABLE;
	uint32_t crc32 = 0xffffffff;

	while (length--)
		crc32 = (crc32 >> 8) ^ lutable[((crc32 ^ *data++) & 0xff)];

	crc32 = crc32 ^ 0xffffffff;

	return crc32;
}
