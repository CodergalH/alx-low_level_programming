#include <stdio.h>
#include "main.h"

/**
 * print_diagonal -  print backslashes equal to value of int n
 *
 * @n: interger
 */

void print_diagonal(int n)
{
int i;

i = 0;
for (i = 0; i < n; i++)
{
if (n <= 0)
{
_putchar(10);
}
else
{
_putchar(92);
}
}
_putchar(10);

}
