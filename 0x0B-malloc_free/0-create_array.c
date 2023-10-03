#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create array and initialize it with char c
 *
 * @size: size of array
 * @c: character stored in array
 * Return: pointer to an array, or NULL if size = 0 or failes
 */

char *create_array(unsigned int size, char c)
{
int str;

if (size == 0)
{
return (NULL);
}

str = malloc(sizeof(char) * size);

int count;
for (count = 0 ; count <= size - 1 ; count++)
str[count] = c;

return (str);
}
