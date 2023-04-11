#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: The new string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, size = 0;
	char *b;

	if (!(s1 || s2))
		return (NULL);

	if (s1)
		size += strlen(s1);

	if (s2)
		size += strlen(s2);

	b = malloc(size * sizeof(char));
	if (!b)
		return (NULL);

	if (s1)
	{
		while (s1[j] != '\0')
			b[i++] = s1[j++];
		j = 0;
	}

	if (s2)
	{
		while (s2[j] != '\0')
			b[i++] = s2[j++];
	}
	b[i] = '\0';
	return (b);
}
