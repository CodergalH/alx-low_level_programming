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

j = 65;
do {
i = 97;
do {
putchar(i);
i++;
} while (i < 123);
putchar(j);
j++;
} while (j < 91);
return (0);
}
