/**
 * set_bit - Set the value of a bit to 1 at an index
 * @n: Dec rep of num
 * @index: Index of bit to set
 * Return: 1 if successful else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit_length = sizeof(unsigned long int) * 8 - 1;

	if (index > bit_length)
		return (-1);
	*n |= 1 << index;
	return (1);
}
