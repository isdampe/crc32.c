# Minimal CRC32 checksum function in C

This small library contains the single function

```c
uint32_t crc32_checksum(uint8_t *data, size_t length);
```

which returns a CRC32 checksum of a given array of bytes, using a pre-computed
lookup table. 1,028 bytes of memory is required for this procedure.

## Example usage

See [src/example.c](src/example.c). Build it with `./build.sh`.
