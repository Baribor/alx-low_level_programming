#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: number of items
 * @size: size of each item
 * Return: a pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = malloc(nmemb * size);
	if (!m)
		return (NULL);

	for (i = 0; i < (nmemb * size); ++i)
	{
		m[i] = 0;
	}

	return (m);
}
