#include <stdio.h>

/**
 * main - entry point
 * Return - 0 (Success)
 *
 * Return: Print out numbers
 */

int main(void)
{
int a = 1;

do {
putchar("%d", a);
a++;
} while (a < 9);
putchar("\n");

return (0);
}
