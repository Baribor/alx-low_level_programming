#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bit from s2 to add
 * Return: a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int s1l, s2l, i = 1, j = 0, x, k;
	char *c = malloc(i * sizeof(char));

	if (!c)
		return (NULL);

	if (s1)
	{
		s1l = strlen(s1);
		i += s1l;
		c = realloc(c, i * sizeof(char));
		if (!c)
			return (NULL);

		for (x = 0; x < s1l; ++x, ++j)
			c[j] = s1[x];
	}

	if (s2)
	{
		s2l = strlen(s2);
		k = (int)n > s2l ? s2l : (int)n;
		i += k;
		c = realloc(c, i * sizeof(char));
		if (!c)
			return (NULL);
		for (x = 0; x < k; ++x, ++j)
			c[j] = s2[x];
	}

	c[j] = '\0';
	return (c);
}
