#include <stdio.h>
#include "main.h"

/**
 * _strncat - catenate two strings but add specified number of characters
 * @dest: string 1
 * @src: string 2
 * @n: specified number
 *
 * Return: catenated string
 */

char *_strncat(char *dest, char *src, int n)
{

int index = 0, dest_len = 0;

while (dest[index++])
dest_len++;

for (index = 0; src[index] && index < n; index++)
dest[dest_len++] = src[index];

return (dest);
}
