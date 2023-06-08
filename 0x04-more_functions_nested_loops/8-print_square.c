#include "main.h"

/**
 * print_square - Prints a square in the terminal
 *
 * @size: Size of the square
 * Return: Nothing
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; ++i)
	{
		for (j = 0; j < size; ++j)
		{
			_putchar('#');
		}
		if (i < size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
