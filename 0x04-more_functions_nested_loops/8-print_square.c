#include <stdio.h>
#include "main.h"

/**
 * print_square -  print hashes equal to value of int n
 *
 * @size: interger
 */

void print_square(int size)
{
int i, j;

if (size > 0)
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar(35);
}

if (i == (size - 1))
continue;
_putchar(10);
}
}
_putchar(10);

}
