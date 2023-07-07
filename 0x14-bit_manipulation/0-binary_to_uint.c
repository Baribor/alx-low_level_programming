#include <string.h>

/**
 * _pow - Returns base raised to the index of index
 * @base: The base number
 * @index: The power of the index
 * Return: The power of base rasied to index
 */
unsigned int _pow(int base, int index)
{
	unsigned int p = 1;
	int c = 0;

	for (; c < index; c++)
		p *= base;
	return (p);
}

/**
 * binary_to_uint - Converts a binary string to integer
 * @b: Binary string
 * Return: An unsigned integer representation of b
 */
unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int dec = 0;

	if (!b)
		return (0);

	index = strlen(b) - 1;

	while (*b)
	{
		if (!(*b == '1' || *b == '0'))
			return (0);
		if (*b == '1')
			dec += _pow(2, index);
		b++;
		index--;
	}

	return (dec);
}
