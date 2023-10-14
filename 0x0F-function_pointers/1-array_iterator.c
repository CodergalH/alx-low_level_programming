#include "function_pointers.h"

/**
 * array_iterator - executes a function
 * on every member of an array
 *
 * @array: array
 * @size: size of array
 * @action: function to be executed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

if (array == NULL || action == NULL)
return;

int i;

for (i = 0; i < size; i++)
action(array[i];

}
