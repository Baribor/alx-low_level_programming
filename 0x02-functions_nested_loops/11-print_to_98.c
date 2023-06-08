#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural number form a starting point n to 98
 *
 * @n: starting point
 * Return: void
 */
void print_to_98(int n)
{
	int i = n;

	while (i != 98)
	{
		printf("%d, ", i);

		if (n < 98)
			i++;
		else
			i--;

	}
	printf("%d\n", i);
}
