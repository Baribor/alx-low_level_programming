#include "main.h"

/**
 * print_diagonal - Prints a diagonal on the terminal
 *
 * @n: Height of the diagonal
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int i, space = 0;

	while (n > 0)
	{
		for (i = 0; i < space; ++i)
		{
			_putchar(' ');
		}
		space++;
		_putchar('\\');
		n--;
		if (n > 0)
			_putchar('\n');
	}
	_putchar('\n');
}
