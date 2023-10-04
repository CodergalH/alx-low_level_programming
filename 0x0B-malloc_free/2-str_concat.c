#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - merge strings given as parameter
 *
 * @s1: string
 * @s2: second string
 * Return: pointer to merged string
 */

char *str_concat(char *s1, char *s2)
{
int size, size1, size2;
char *str1;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (size = 0, size1 = 0; s1[size] != '\0';)
{
size += 1;
size1 += 1;
}
for (size2 = 0; s2[size2] != '\0';)
{
size += 1;
size2 += 1;
}

str1 = malloc(sizeof(char) * size + 1);

if (str1 == NULL)
{
return (NULL);
}
else
{
memcpy(str, s1, size1);
memcpy(str + size1, s2, size2 + 1);
}

return (str1);
}
