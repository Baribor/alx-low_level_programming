#include <string.h>
/**
 * rev_string - Reverses a string in-place
 * @s: pointer to the string array of characters
 * Return: Nothing
 */
void rev_string(char *s)
{
	int len = strlen(s), mid, i;
	char temp;

	mid = len / 2;

	for (i = 0; i < mid; ++i)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
