#include <string.h>

/**
 * _strcat - Appends one string to the end of another
 * @dest: string to append to
 * @src: string to be appended
 * Return: Nothing
 */
char *_strcat(char *dest, char *src)
{
	int dl = strlen(dest);
	int sl = strlen(src);
	int i, j = 0;

	for (i = dl; i < dl + sl; ++i, ++j)
	{
		dest[i] = src[j];
	}
	return (dest);
}
