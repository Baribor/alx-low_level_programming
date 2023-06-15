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
	unsigned int s1l, s2l;
	unsigned int i, j = 0;
	char *c;

	if (!s1)
		s1l = 0;
	else
		s1l = strlen(s1);

	if (!s2)
		s2l = 0;
	else
		s2l = strlen(s2);
	s2l = n < s2l ? n : s2l;

	c = malloc(sizeof(char) * (s1l + s2l + 1));
	if (!c)
		return (NULL);

	for (i = 0; i < s1l; ++i, ++j)
		c[j] = s1[i];

	for (i = 0; i < s2l; ++i, ++j)
		c[j] = s2[i];

	c[j] = '\0';
	return (c);
}
