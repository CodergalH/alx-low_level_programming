#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: integer
 * @index: index of bit to be returned
 *
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int num, i, bit_index;
	int binary[INT_SIZE];

	if (n == NULL || index == NULL)
		return (-1);

	num = INT_SIZE - 1;
	bit_index = num - index;

	while (num >= 0)
	{
		binary[num] = n & 1;
		num--;
		n >>= 1;
	}

	if (bit_index > INT_SIZE)
		return (-1);
	else
		return (binary[bit_index]);
}

