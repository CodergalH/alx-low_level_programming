#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all parameter
 *
 * @n: first param
 * Return: sum of  parameter
 */

int sum_them_all(const unsigned int n, ...)
{

if (n == 0)
return (0);

va_list args;
unsigned int i, x, s = 0;

va_start(args, n);

for (i = 0; i < n; i++)
{
x = va_arg(args, int);
s += x;
}
va_end(args);
return (s);

}
