#include <stdio.h>

/**
 * main - entry point
 * Return - 0 (Success)
 *
 * Return: Print out numbers
 */

int main(void)
{
int a = 0;

do {
putchar(a + '0');
a++;
} while (a < 10);
putchar(10);

return (0);
}
