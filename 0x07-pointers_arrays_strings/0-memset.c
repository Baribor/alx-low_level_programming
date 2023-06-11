#include <stdio.h>

/**
 * _memset - fill memory with a constant byte
 * @s: Pointer to the memory area
 * @b: Byte to fill with
 * @n: Number of bytes to fill.
 * Description: fills the first n bytes of the memory area
 * pointed to by s with the constant byte c.
 * Return: a pointer to the memory area s.
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; ++i)
	{
		s[i] = b;
	}
	return (s);
}
