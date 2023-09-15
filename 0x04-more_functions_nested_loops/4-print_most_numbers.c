#include <stdio.h>
#include "main.h"

/**
 * print_numbers - print 0 - 10 excluding 2 & 4
 *
 */

void print_numbers(void)
{
int i;

i = 0;
for (i = 0; i < 10; i++)
{
if (i == 2 || i == 4)
{
continue;
}
else
{
_putchar(i + '0');
}
_putchar(10);

}
}
