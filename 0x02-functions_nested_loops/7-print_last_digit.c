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

if (a < 0)
{
return ((a % 10) * -1);  
_putchar((a % 10) * -1 + '0');
}
else
{
return (a % 10);
_putchar(a % 10 + '0');
}

return (a);

}
