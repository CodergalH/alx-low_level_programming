#include "main.h"

/**
 * set_bit - sets the value of a bit to 1at a given index.
 * @n: integer
 * @index: index of bit to be changed
 *
 * Return: success 1.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit_index;
	int binary[INT_SIZE], num, i, j, store;
	unsigned long int result = 0;

	num = INT_SIZE - 1;
	bit_index = num - index;
	i = num, store = num;

	if (bit_index > INT_SIZE)
		return (-1);

	while (num >= 0)
	{
		binary[num] = n & 1;
		num--;
		n >>= 1;
	}

	binary[bit_index] = 1;
	i = store;

	for (int j = 0; j <= i; ++j)
	{
		for (--i; i >= j; --i)
			binary[j] *= 2;

		i = INT_SIZE - 1;
	}

	for (j = 0; j <= i; ++j)
		result += binary[i];

	*n = result;

	return (1);
}

