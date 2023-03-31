#include <stdio.h>

/**
 * _isalpha - checks if a character is an alphabet.
 *
 * @a: character to check
 * Return: 1 if is alphabet else 0
 */
int _isalpha(int a)
{
	return ((a >= 97 && a <= 122) || (a >= 65 && a <= 90));
}

/**
 * rot13 - Encodes a string using rot13
 * @s: The string to encode
 * Return: Nothing
 */
char *rot13(char *s)
{
	char mapper[123] = {'0'};
	int u = 65, l = 97, i = 0;
	char c = s[i];

	while (u <= 90)
	{
		mapper[u] = (((u + 13) / 91) * 65) + ((u + 13) % 91);
		mapper[l] = (((l + 13) / 123) * 97) + ((l + 13) % 123);
		u++;
		l++;
	}

	while (c != '\0')
	{
		if (_isalpha(c))
			s[i] = mapper[(int) c];
		c = s[++i];
	}
	return (s);
}
