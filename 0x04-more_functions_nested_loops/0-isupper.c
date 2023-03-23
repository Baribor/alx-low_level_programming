/**
 * _isupper - Checks if a character is uppercase.
 *
 * @c: The character to check.
 * Return: 1 if true else 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
