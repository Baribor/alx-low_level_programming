#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: number of items
 * @size: size of each item
 * Return: a pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = malloc(nmemb * size);
	if (!m)
		return (NULL);
	return (m);
}
