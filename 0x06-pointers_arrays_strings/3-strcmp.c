#include <string.h>

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: Integer
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int lf = strlen(s1);

	for (i = 0; i <= lf; ++i)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
