#include <stdio.h>

/**
 * main - Entry point
 *
 * Return - 0 (Success)
 * Return: Returns the alphabets in lowercase
 * and uppercase
 */

int main(void)
{
int i, j;

i = 97;
j = 65;
do {
putchar(i);
i++;
} while (i < 123);

do {
putchar(j);
j++;
} while (j < 91);
putchar(10);

return (0);
}
