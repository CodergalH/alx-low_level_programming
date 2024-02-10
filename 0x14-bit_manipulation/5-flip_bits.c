#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n:first number
 * @m:other number
 *
 * return:returns the number of bits you would need to flip
 * to get from one number to another.
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int new;
	unsigned int count;

	new = n ^ m;
	count = 0;

	while (n > 0)
	{
		count++;
		n &= (n - 1);
	}

	return (count);
}

