#include <stdio.h>
#include "main.h"

/**
 * _strcat - catenate two strings
 * @dest: string 1
 * @src: string 2
 *
 * Return: Catenated string
 */

char *_strcat(char *dest, char *src)
{

int inc = 0;
while (*(dest + inc) !=  '\0')
{
inc++;
}

int add = 0;
while (*(src + add) != '\0')
{
*(dest + inc) = *(src + add);
add++;
inc++;
}

*(dest + inc) = '\0';
return (dest);
}
