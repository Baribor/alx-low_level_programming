/**
 * _pow_recursion - Print the value of a number indexed
 * @x: The number
 * @y: The index
 * Return: The Power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
