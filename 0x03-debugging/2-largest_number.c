#include "main.h"

/**
 * largest_number - returns the largest of three numbers
 * @a: first interger
 * @b: second interger
 * @c: third interger
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
int largest;

if (a > b)
{
if (b > c)
{
largest = a;
}
else if (a > c)
{
largest = a;
}
else
{
largest = c;
}
}
else if (a > c)
{
largest = b;
}
else if (c > b)
{
largest = c;
}
else
{
largest = b;
}

return (largest);

}
