#include <string.h>

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: Integer
 */
int _strcmp(char *s1, char *s2)
{
	int diff = 0;
	int i;
	int lf = strlen(s1), ls = strlen(s2);

	for (i = 0; i < lf + ls; ++i)
	{
		if (i < lf)
			diff += s1[i];
		else
			diff -= s2[i - lf];
	}
	return (diff == 0 ? diff : (diff < 0 ? -15 : 15));
}
