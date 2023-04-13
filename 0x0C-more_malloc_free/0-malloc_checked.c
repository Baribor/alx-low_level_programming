#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: The number of items
 * Return: A pointer
 */
void *malloc_checked(unsigned int b)
{
	void *m = malloc(b);

	if (!m)
		exit(98);
	return (m);
}
