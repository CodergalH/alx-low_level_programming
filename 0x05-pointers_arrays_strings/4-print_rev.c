#include "main.h"

/**
 * print_rev - print string in reverse
 *@s: string treated
 *
 */

void print_rev (char *s)
{
int counter, add;

add = 0;
for (counter = 0; s[counter] != '\0'; counter++)
add++;

for (counter = add - 1; counter >= -1; counter--)
{
if (counter < add && counter >= 0)
_putchar(s[counter]);
else
_putchar(10);
}

}
