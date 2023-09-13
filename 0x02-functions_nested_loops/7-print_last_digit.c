#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints absolute value of a number
 *
 * @a: arguement
 *
 * Return: 0 success
 */

int print_last_digit(int a)
{
int last;

lastd = a % 10;
if (last < 0)
{
last = last * -1;
}

_putchar(last + '0');
return (last);

}
