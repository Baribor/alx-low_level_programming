/**
 * get_bit - Get the bit at an index
 * @n: Dec rep of the number
 * @index: The index of the bit to get
 * Return: The bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit_length = sizeof(unsigned long int) * 8 - 1;
	unsigned long int mask;

	if (index > bit_length)
		return (-1);

	mask = 1 << index;
	n &= mask;

	return (n == mask);
}
