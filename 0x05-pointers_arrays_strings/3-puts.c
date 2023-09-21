#include "main.h"

/**
 * _puts - print string
 *@str: string treated
 *
 */

void _puts(char *str)
{
int counter, add;

add = 0;
for (counter = 0; s[counter] != '\0'; counter++)
add++;

for (counter = 0; counter <= add; counter++)
{
if (counter < add)
_putchar(s[counter]);
else
_putchar(10);
}

}
