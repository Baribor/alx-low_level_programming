/**
 * is_leet_char - checks if a character is a leet char.
 *
 * @c: A character to check
 * Return: 1 if true else 0
 */
int is_leet_char(char c)
{
	return (c == 'a' || c == 'A' || c == 'e' || c == 'E'
		|| c == 'o' || c == 'O' || c == 't' || c == 'T'
		|| c == 'l' || c == 'L');
}

/**
 * leet - Encodes a string into 1337.
 *
 * @s: pointer to the string array of characters
 * Return: A string pointer
 */
char *leet(char *s)
{
	char mapper[117];
	int i = 0;

	mapper[97] = '4';
	mapper[65] = '4';
	mapper[101] = '3';
	mapper[69] = '3';
	mapper[111] = '0';
	mapper[79] = '0';
	mapper[116] = '7';
	mapper[84] = '7';
	mapper[108] = '1';
	mapper[76] = '1';

	while (s[i] != '\0')
	{
		if (is_leet_char(s[i]))
			s[i] = mapper[(int)s[i]];
		i++;
	}
	return (s);
}
