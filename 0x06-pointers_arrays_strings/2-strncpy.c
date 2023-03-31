#include <string.h>

/**
 * _strncpy - copies a string to another variable
 * @dest: where to copy to
 * @src: where to copy from
 * @n: number of characters to copy
 * Return: Nothing
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len = strlen(src);
	int i;

	for (i = 0; i < n; ++i)
	{
		if (i > len - 1)
		{
			dest[i] = '\0';
			continue;
		}
		dest[i] = src[i];
	}

	return (dest);
}
