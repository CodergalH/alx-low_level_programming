#include <stdio.h>

/**
 * main - Prints out all possible
 * combinations of 3 single numbers
 *
 * Return: 0 success
 */

int main(void)
{
int num1, num2, num3;

num1 = 0;
num2 = 0;
num3 = 0;
do {
do {
num2 = num1 + 1;
do {
num3 = num2 + 1;
do {
putchar(num1 + '0');
putchar(num2 + '0');
putchar(num3 + '0');
if (num1 == 7 && num2 == 8 && num3 == 9)
break;
putchar(',');
putchar(' ');
num3++;
} while (num3 != 10);
num2++;
} while (num2 != 8);
num1++;
} while (num1 != 9);
break;
} while (num1 != 8 && num2 != 9);
putchar('\n');

return (0);
}
