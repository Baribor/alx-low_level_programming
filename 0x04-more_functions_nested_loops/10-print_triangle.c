#include "main.h"

/**
 * print_triangle - Prints a triangle to the terminal
 *
 * @size: Height of the triangle
 * Return: Nothing
 */
void print_triangle(int size)
{
	int i, j, space;

	for (i = 1; i <= size; ++i)
	{
		space = i;
		for (j = 1; j <= size; ++j, space++)
		{
			if (space < size)
				_putchar(' ');
			else
				_putchar('#');
		}
		if (i < size)
			_putchar('\n');
	}
	_putchar('\n');
}
