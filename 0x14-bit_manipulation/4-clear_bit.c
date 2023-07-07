/**
 * clear_bit - Sets the bit at index to 0
 * @n: Dec rep of the number
 * @index: Index of the bit to clear
 * Return: 1 if successful else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit_length = sizeof(unsigned long int) * 8 - 1;
	unsigned long int mask;

	if (index > bit_length)
		return (-1);
	mask = ~(1 << index);
	*n &= mask;
	return (1);
}
