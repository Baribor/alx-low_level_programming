#include <stdlib.h>
#include <stdio.h>
/**
 * _strstr - locate a substring
 * @haystack: The memory area to search.
 * @needle: The bytes to match.
 * Description: finds the first occurrence of the substring needle in
 * the string haystack.  The terminating null bytes ('\0') are not compared.
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int ni;

	while (*haystack)
	{

		ni = 0;
		while (haystack[ni] == needle[ni])
		{
			if (haystack[ni] == '\0' && needle[ni] != '\0')
				return (NULL);

			if (needle[ni] == '\0')
				return (haystack);
			ni++;
		}

		haystack++;
	}

	return (NULL);
}
