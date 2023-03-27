#include <stdio.h>

/**
 * print_array - Prints the n nunbers of items in an array
 * @a: pointer to the array
 * @n: Number of items to print
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		printf("%d", *(a + i));
		if (i != n - 1)
			printf(", ");
	}
	putchar('\n');
}
