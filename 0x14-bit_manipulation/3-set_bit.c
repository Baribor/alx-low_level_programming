/**
 * get_bit_length - Calculates the binary length of an int
 * @n: Dec rep of the number
 * Return: The length of the bin num.
 */
unsigned int get_bit_length(unsigned long int n)
{
	if (!n)
		return (0);

	return (1 + get_bit_length(n >> 1));
}

/**
 * set_bit - Set the value of a bit to 1 at an index
 * @n: Dec rep of num
 * @index: Index of bit to set
 * Return: 1 if successful else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit_length;

	if (!n)
	{
		if (index > 0)
			return (-1);
		*n = 1;
		return (1);
	}
	bit_length = get_bit_length(*n);
	if (index > bit_length - 1)
		return (-1);
	*n |= 1 << index;
	return (1);
}
