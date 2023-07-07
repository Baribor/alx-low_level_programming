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
 * clear_bit - Sets the bit at index to 0
 * @n: Dec rep of the number
 * @index: Index of the bit to clear
 * Return: 1 if successful else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit_length;

	if (!*n)
		return (index > 0 ? -1 : 1);

	bit_length = get_bit_length(*n);
	if (index > bit_length - 1)
		return (-1);
	*n ^= 1 << index;
	return (1);
}
