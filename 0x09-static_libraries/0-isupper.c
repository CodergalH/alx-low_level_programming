#include <stdio.h>
#include "main.h"

/**
 *_isupper - check if the int c is uppercase
 * @c: character to be checked
 *
 * Return: 1 (success) or 0 (otherwise)
 */

int _isupper(int c)
{
while (c >= 65 && c <= 90)
{
return (1);
}
return (0);

}
