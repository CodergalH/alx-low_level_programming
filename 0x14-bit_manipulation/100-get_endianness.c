#include "main.h"

/**
 * get_endianness - get order of arrangement of bytes
 * Return: 1 - for little endian
 * 0 - big endian
 */
int get_endianness(void)
{
unsigned int value = 1;
unsigned char *byte = (unsigned char *)&value;

if (*byte == 1)
return (1);
else
return (0);
}
