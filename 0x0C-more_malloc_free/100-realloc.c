#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block
 * @ptr: The memory space to reallocate
 * @old_size: The old size
 * @new_size: New size to realloicate to
 * Return: A pointer to the reallocated space.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newPtr;

	if (old_size == new_size)
		return (ptr);

	if (!ptr)
	{
		free(ptr);
		newPtr = malloc(new_size);
	}
	else
	{
		free(ptr);
		if (new_size == 0)
		{
			return (NULL);
		}

		newPtr = malloc(new_size);
	}

	return (newPtr);
}
