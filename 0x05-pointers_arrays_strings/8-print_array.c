#include <stdio.h>
#include "main.h"

/**
 * print_array - print array element
 * @a: array to be printed
 * @n: no of elements to be printed
 */

void print_array(int *a, int n)
{
int count;
for (count = 0; count < n; count++)
{
if (count != n - 1)
{
printf("%d, ", a[count]);
}
else
{
printf("%d", a[count]);
}
_putchar(10);
}
}
