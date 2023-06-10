#include <stdlib.h>

/**
 * _strchr - locate character in string
 * @s: memory area to search
 * @c: Character to locate
 * Description: returns a pointer to the first occurrence of
 * the character c in the string s.
 * Return: a pointer to the matched character or
 * NULL if the character is not found.
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (NULL);
}
