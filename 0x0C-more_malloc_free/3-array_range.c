#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 * @min: start of range
 * @max: end of range
 * Return: a pointer
 */
int *array_range(int min, int max)
{
	int *arr, i, j = 0;

	if (min > max)
		return (NULL);

	arr = (int *) calloc(max - min + 1, sizeof(int));
	if (!arr)
		return (NULL);

	for (i = min; i <= max; ++i, ++j)
	{
		arr[j] = i;
	}

	return (arr);
}
