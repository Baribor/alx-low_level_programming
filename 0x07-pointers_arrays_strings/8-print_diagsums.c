#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 * @a: The matrix
 * @size: Size of the matrix
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{

	int lr = 0, rl = 0;
	int i;

	for (i = 0; i < size; ++i)
	{
		lr += a[i * (size + 1)];
		rl += a[i * (size - 1) + size - 1];
	}
	printf("%d, %d\n", lr, rl);
}
