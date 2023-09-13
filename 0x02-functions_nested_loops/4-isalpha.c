#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - check if arguement passed is an alphabet
 *
 * @c: character to be checked
 *
 * Return: 1 if alphabet
 * 0 otherwise
 */

int _isalpha(int c)
{

while ((c >= 97 && c <= 122) || (c >= 65 && <= 90))
{
return (1);
}

return (0);
}
