#include "main.h"

/**
 * rev_string - print string in reverse
 *@s: string treated
 *
 */

void rev_string(char *s)
{
int counter, add;

add = 0;
for (counter = 0; s[counter] != '\0'; counter++)
add++;

for (counter = add - 1; counter >= 0; counter--)
{
if (counter < 0)
break;
_putchar(s[counter]);
}

}
