#include <stdio.h>
#include <stdlib.h>

/**
* _calloc - allocate memory using malloc and initialize it to zero
*@nmemb: number of elements
*@size: size of the memory block to be allocated
*
*Return: poiner to the address of the memory block
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int index;
char *array;

if (nmemb == 0 || size == 0)
return (NULL);

array = malloc(nmemb * size);

if (array == NULL)
return (NULL);

for (index = 0; index < (nmemb * size); index++)
array[index] = 0;

return (array);
}
