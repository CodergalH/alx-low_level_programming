#include <stdio.h>
#include "main.h"

/**
 * _abs - prints absolute value of a number
 *
 * @int: arguement
 *
 * Return: 0 success
 *
 */

int _abs(int a)
{

if (a < 0)
_putchar (a * -1);
else
_putchar(a);

return (0);

}
