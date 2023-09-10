#include <stdio.h>

/**
 * main - Prints out all possible
 * combinations of 2 single numbers
 *
 * Return: 0 success
 */

int main(void)
{
int num1, num2;

num1 = 0;
num2 = 0;
do {
do {
num2 = num1 + 1;
do {
putchar(num1 + '0');
putchar(num2 + '0');
putchar(',');
putchar(' ');
num2++;
} while (num2 != 9);
num1++;
} while (num1 != 8);
break;
} while (num1 != 8 && num2 != 9);
putchar('\n');

return (0);
}
