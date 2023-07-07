
/**
 * flip_bits - Calculates the number of bits you would need to
 * flip to get from one number to another.
 * @n: Starting number
 * @m: Target number
 * Return: Number if bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int left_n, left_m;

	while (n || m)
	{
		left_n = n >> 1;
		left_m = m >> 1;

		/* Check if the LSB are not the same*/
		if ((n - (left_n * 2)) != (m - (left_m * 2)))
			count += 1;
		n = left_n;
		m = left_m;
	}
	return (count);
}
