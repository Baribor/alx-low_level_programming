#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 *
 * @n: The length of the line
 * Return: Nothing
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
