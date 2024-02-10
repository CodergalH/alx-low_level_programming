#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * 		to get from one number to another.
 * @n:first number
 * @m:other number
 *
 * return: no of flipped bits
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int new;
	unsigned int count;

	new = n ^ m;
	count = 0;

	while (new > 0)
	{
		count++;
		new &= (new - 1);
	}

	return (count);
}

