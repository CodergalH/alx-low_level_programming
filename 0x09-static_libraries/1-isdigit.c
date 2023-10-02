#include <stdio.h>
#include "main.h"

/**
 *_isdigit - check if the int c is a digit
 * @c: character to be checked
 *
 * Return: 1 (success) or 0 (otherwise)
 */

int _isdigit(int c)
{
while (c >= 48 && c <= 57)
{
return (1);
}
return (0);

}
