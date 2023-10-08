#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - merge strings given as parameter
 *
 * @s1: string
 * @s2: second string
 * @n: no of bytes
 *
 * Return: pointer to merged string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int size1, size2;
char *str;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

size1 = strlen(s1);
size2 = strlen(s2);

if (n >= size2)
n = size2;

str = malloc(sizeof(char) * size1 + n + 1);

if (str == NULL)
{
return (NULL);
}

strcpy(str, s1);
strncpy(str + size1, s2, n);
str[size + n] = '\0';

return (str);
}
