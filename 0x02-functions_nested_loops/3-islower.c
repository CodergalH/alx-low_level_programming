#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - check if arguement passed is lowercase
 *
 * @c: character to be checked
 *
 * Return: 1 if lowercase
 * 0 otherwise
 */

int _islower(int c)
{

while(c >= 97 && c <= 122)
{
return (1);
}

return (0);
}
