#include <stdio.h>

/**
 * main - Prints the numbers from 00 to 99, numbers separated by
 *        a comma followed by a space, in ascending order.
 *
 * Return: Always 0.
 */

int main(void)
{
int num1 = 0;

do {
if (i != 9)
{
putchar(',');
putchar(' ');
}
putchar(i);
num1++;
} while (num1 < 10);
putchar('\n');

return (0);
}
