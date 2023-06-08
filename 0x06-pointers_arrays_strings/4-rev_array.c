#include <stdlib.h>

/**
 * reverse_array - reverses and integer array in-place
 * @a: Pointer to the array
 * @n: number of items in the array
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int *c = (int *) malloc(n * sizeof(int));
	int i = 0;

	while (i < n)
	{
		c[i] = a[i];
		i++;
	}
	i = n;
	while (i > 0)
	{
		a[n - i] = c[i - 1];
		i--;
	}

	free(c);
}
