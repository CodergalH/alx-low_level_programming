#include "main.h"


/**
 * binary_to_uint - convert binary to integer.
 * @b: pointer to binary
 *
 * Return: converted number.
 */


unsigned int binary_to_uint(const char *b)
{
	int i, j, store;
	unsigned int results = 0;
	unsigned int dec[(sizeof(long int) * 64)];
	unsigned int binary_digit[] = {0, 1};

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; ++i)
		if (b[i] != '0' && b[i] != '1')
			return (0);

	store = i;

	for (--i; i >= 0; --i)
	{

		if (b[i] == '0')
			dec[i] = binary_digit[0];
		else if (b[i] == '1')
			dec[i] = binary_digit[1];
	}

	i = store;
	for (j = 0; j < i; ++j)
	{
		for (--i ; i > j ; --i)
			dec[j] *= 2;
		i = store;
	}

	for (j = 0 ; j < i; ++j)
		results+= dec[j];

	return (results);
}

