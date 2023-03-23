/**
 * _isdigit - Checks if a character is a digit.
 *
 * @c: The character to check.
 * Return: 1 if true else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
