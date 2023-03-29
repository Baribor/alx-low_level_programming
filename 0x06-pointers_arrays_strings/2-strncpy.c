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
	int i;

	for (i = 0; i < n; ++i)
	{
		dest[i] = src[i];
	}
	return (dest);
}
