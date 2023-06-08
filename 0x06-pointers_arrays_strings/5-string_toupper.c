/**
 * _islower - checks if a character is lowercase or not.
 *
 * @c: A character to check
 * Return: 1 if true else 0
 */
int _islower(int c)
{
	if (c < 97 || c > 122)
	{
		return (0);
	}
	return (1);
}

/**
 * string_toupper - Changes all lowercase to uppercase in a string
 * @s: The string
 * Return: A string pointer
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (1)
	{
		if (s[i] == '\0')
			break;
		if (_islower(s[i]))
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
