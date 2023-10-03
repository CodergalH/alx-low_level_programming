#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copy string given as parameter
 *
 * @str: string to be copied
 * Return: pointer to copied string
 */

char *_strdup(char *str)
{
int count, size = 0;
char *str1;

if (str == NULL)
{
return (NULL);
}

for (size = 0; str[size] != '\0';)
{
size += 1;
}

str1 = malloc(sizeof(char) * size + 1);

if (str1 == NULL)
{
return (NULL);
}
else
{
for (count = 0 ; count <= size - 1 ; count++)
str1[count] = str[count];
}

return (str1);
}
