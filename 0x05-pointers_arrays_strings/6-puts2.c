#include "main.h"

/**
 * puts2 - print every other character of a string
 *@str: string treated
 *
 */

void puts2(char *str)
{
int counter, add;

add = 0;
for (counter = 0; str[counter] != '\0'; counter++)
add++;

for (counter = 0; counter <= add; counter++)
{
if (counter < add)
{
if (counter % 2 != 0)
{
continue;
}
_putchar(str[counter]);
}
else
_putchar(10);
}
}
