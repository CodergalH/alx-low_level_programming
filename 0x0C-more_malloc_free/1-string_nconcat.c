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
int size, size1, size2;
char *str;

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

str = malloc(sizeof(char) * size + 1);

if (str == NULL)
{
return (NULL);
}
else
{
memcpy(str, s1, size1);
if (n == size2)
memcpy(str + size1, s2, n + 1);
else
memcpy(str + size1, s2, size + 1);
}

return (str);
}
