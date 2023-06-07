/**
 * _sqrt - recursively finds swuare root
 * @n: The number
 * @c: counter
 * Return: The square root
 */
int _sqrt(int n, int c)
{
	if (n % 2 == 1)
		return (-1);

	if (c * c < n)
		return (-1);

	if (c * c == n)
		return (c);

	return (_sqrt(n, c - 1));
}

/**
 * _sqrt_recursion - computes the square root of a number
 * @n: The number
 * Return: The squartre root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, n / 2));
}
