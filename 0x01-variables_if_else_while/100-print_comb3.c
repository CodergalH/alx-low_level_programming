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
} while (num2 != 10);
num1++;
} while (num1 == 8);
} while (num1 != 9 && num2 != 10);
putchar('\n');

return (0);
}
