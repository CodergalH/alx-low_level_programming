#include <stdio.h>
#include "main.h"

/**
 * print_triangle -  print hashes equal to value of int n
 *
 * @size: interger
 */

void print_triangle(int size)
{
int i, j;

if (size > 0)
{

for (i = 0; i <= size; i++)
{

for ((j = size - 1); j > 0; j--)
{
_putchar(32);
}

for (j = 0; j < i; j++)
{
_putchar(35);
}

if (i == size)
continue;
_putchar(10);
}

_putchar(10);

}

}
