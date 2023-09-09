#include <stdio.h>

/**
 * main - Entry point
 *
 * Return - 0 (Success)
 * Return: Returns the alphabets in lowercase
 */

int main(void)
{
int i, j;

i = 97;
j = 10;
do {
putchar(i);
i++;
putchar(j);
} while (i < 123);
return (0);
}
