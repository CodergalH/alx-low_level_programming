#include <stdio.h>

/**
 * main - entry point
 * Return - 0 (Success)
 *
 * Return: Print out numbers
 * in base 16
 */

int main(void)
{
int num = 0;
int num2 = 97;

do {
putchar(num + '0');
num++;
} while (num < 10);

do {
putchar(num2);
num2++;
} while (num2 < 103);
putchar(10);

return (0);
}
