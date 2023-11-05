#include "main.h"

int get_endianness(void)
{
unsigned int value = 1;
unsigned char *byte = (unsigned char *)&value;

if (*byte == 1)
return (1);
else
return (0);
}
