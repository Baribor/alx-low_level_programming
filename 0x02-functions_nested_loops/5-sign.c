#include "main.h"

/**
 * print_sign - prints the sign of a number.
 *
 * @n: The number
 * Return: 1 if n > 1, 0 if n = 0 else - 1
 */
int print_sign(int n)
{
	int r;

	if (n > 0)
	{
		_putchar('+');
		r = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		r = 0;
	}
	else
	{
		_putchar('-');
		r = -1;
	}
	return (r);
}
