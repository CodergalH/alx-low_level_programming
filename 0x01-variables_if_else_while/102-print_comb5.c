#include <stdio.h>

/**
 * main - Prints out all possible
 * combinations of 2 numbers between 0 and 100
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
putchar(' ');
putchar(num2 + '0');
if (num1 == "98" && num2 == "99")
break;
putchar(',');
putchar(' ');
num2++;
} while (num2 != "100");
num1++;
} while (num1 != "99");
break;
} while (num1 != "98"  && num2 != "99");
putchar('\n');

return (0);
}
