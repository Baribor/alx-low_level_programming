#include <limits.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of an integer
 *
 * @n: The integer
 * Return: The last digit of the integer.
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n == INT_MIN)
	{
		_putchar('0' + 8);
		return (8);
	}

	if (n < 0)
	{
		n *= -1;
	}

	last_digit = n % 10;
	_putchar('0' + last_digit);
	return (last_digit);
}
