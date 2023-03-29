#include <string.h>

/**
 * _strncat - Appends one string to the end of another
 * @dest: string to append to
 * @src: string to be appended
 * @n: Number of bit to append from src
 * Return: Nothing
 */
char *_strncat(char *dest, char *src, int n)
{
	int dl = strlen(dest);
	int sl = strlen(src);
	int i, j = 0;

	for (i = dl; i < dl + sl; ++i, ++j)
	{
		if (j == n)
			break;
		dest[i] = src[j];
	}
	return (dest);
}
