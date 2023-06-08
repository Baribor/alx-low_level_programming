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
 * is_seperator - checks if a character is a word seperator.
 *
 * @c: A character to check
 * Return: 1 if true else 0
 */
int is_seperator(int c)
{
	return (c == '\t' || c == ' ' || c == '\n' ||
		c == '.' || c == ';' || c == ',' || c == '"'
		|| c == '{' || c == '}' || c == '?' || c == '!'
		|| c == '(' || c == ')');
}

/**
 * cap_string - Capitalizes a string
 * @s: pointer to the string array of characters
 * Return: Nothing
 */
char *cap_string(char *s)
{
	int i = 0;
	char c = s[i];

	while (c != '\0')
	{
		if (is_seperator(c))
		{
			while (is_seperator(c))
			{
				c = s[++i];
			}
			if (_islower(c))
			{
				s[i] = c - 32;
			}
		}
		c = s[++i];
	}
	return (s);
}
