#include <stdint.h>
#include <stddef.h>
#include "crc32.h"

uint32_t crc32_checksum(uint8_t *data, size_t length)
{
	uint32_t i;
	uint32_t lutable[256] = CRC32_PRCMP_TABLE;
	uint32_t crc32 = 0xffffffff;

	for (i=0; i<length; i++)
		crc32 = (crc32 >> 8) ^ lutable[((crc32 ^ data[i]) & 0xff)];

	crc32 = crc32 ^ 0xffffffff;

	return crc32;
}
