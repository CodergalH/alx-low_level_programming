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
if (i == 101 || i == 113)
{
i++;
continue
}
putchar(i);
i++;
continue;
} while (i < 123);
putchar(j);
return (0);
}
