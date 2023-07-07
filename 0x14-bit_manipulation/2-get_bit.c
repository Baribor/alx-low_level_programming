/**
 * get_bit - Get the bit at an index
 * @n: Dec rep of the number
 * @index: The index of the bit to get
 * Return: The bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int idx = 0;
	unsigned long int left;

	if (!n)
		return (index == 0 ? 0 : -1);

	while (n)
	{
		left = n >> 1;
		if (idx == index)
			return (n - (left * 2));
		n = left;
		idx++;
	}
	return (-1);
}
