#include "main.h"

/**
 * puts_half - print every 2nd half of a string
 *@str: string treated
 *
 */

void puts_half(char *str)
{
int counter, add;

add = 0;
for (counter = 0; str[counter] != '\0'; counter++)
add++;

for (counter = 0; counter <= add; counter++)
{
if (counter < add)
{
if (counter < (add / 2) || counter < ((add - 1) / 2))
{
continue;
}
_putchar(str[counter]);
}
else
_putchar(10);
}
}
