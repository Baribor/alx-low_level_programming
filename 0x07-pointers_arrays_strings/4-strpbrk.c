#include <stdlib.h>

/**
 * matches_any - Checks if a bit can be found
 * in a memory area.
 * @s: The memory area to search.
 * @c: The bit to search.
 * Return: 1 if bit was found else 0.
 */
int matches_any(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i++] == c)
			return (1);
	}

	return (0);
}

/**
 * _strpbrk - search a string for any of a set of bytes.
 * @s: memory area to search.
 * @accept: set of bytes to search for.
 * Description: locates the first occurrence in the string s of any of
 * the bytes in the string accept.
 * Return: a pointer to the byte in s that matches one of
 * the bytes in accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{

	while (*s)
	{
		if (matches_any(accept, *s))
			return (s);
		s++;
	}

	return (NULL);
}
