#include <stdio.h>

/**
 * main - Entry point
 *
 * Return - 0 (Success)
 * Return: Returns the alphabets in lowercase
 * except e and q
 */

int main(void)
{
int i, j;

i = 97;
j = 10;
do {
putchar(i);
i++;
if (i == 113 || i == 101)
{
continue;
}
} while (i < 123);
putchar(j);
return (0);
}
