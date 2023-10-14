#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print name
 *
 * @name: name passed
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;

f(name);
}
