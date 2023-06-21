#include <stddef.h>

/**
 * array_iterator - function that executes a function given as a
 * parameter on each element of an array.
 * @array: The source array
 * @size: Size of the array.
 * @action: Pointer to a function to execute
 * Return: Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!(array && action))
		return;

	for (i = 0; i < size; ++i)
	{
		action(array[i]);
	}
}
