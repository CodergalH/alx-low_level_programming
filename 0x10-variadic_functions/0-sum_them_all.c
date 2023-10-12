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
va_start(args, n);

unsigned int i, x, s = 0;
for (i = 0; i < n; i++)
{
x = va_arg(args, unsigned int);
s += x;
}
va_end(args);
return (s);

}
