#include <stdio.h>

/**
 * main - Entry point
 *
 * Return - 0 (Success)
 * Return: Returns the alphabets in lowercase
 */

int main(void)
{
int i;

i = 97;
do {
putchar(i);
i++;
 putchar("%c\n", i);
} while (i < 123);
return (0);
}
