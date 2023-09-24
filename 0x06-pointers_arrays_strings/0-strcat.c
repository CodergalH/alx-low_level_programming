#include <stdio.h>
#include "main.h"

/**
 * _strcat - catenate two strings
 * @dest: string 1
 * @src: string 2
 *
 * Return: catenated string
 */

char *_strcat(char *dest, char *src)
{

int index = 0, dest_len = 0;

while (dest[index++])
dest_len++;

for (index = 0; src[index]; index++)
dest[dest_len++] = src[index];

return (dest);
}
