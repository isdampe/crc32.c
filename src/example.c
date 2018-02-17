#include <stdio.h>
#include <stdint.h>
#include "crc32.h"

int main(int argc, char **argv)
{
	uint32_t crc = crc32_checksum((uint8_t *)"Hello, world!", 13);
	printf("The CRC32 checksum is 0x%02X\n", crc);
	return 0;
}
