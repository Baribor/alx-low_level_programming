#include "main.h"

/**
 * print_number - print an integer digit by digit.
 *
 * @n: integer to printr
 * Return: void
 */
void print_number(int n)
{
	int digit, count = 0, temp, i;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	if (n == 0)
	{
		_putchar(n + '0');
		return;
	}

	temp = n;

	while (temp > 0)
	{
		count++;
		temp = temp / 10;
	}

	while (count > 0)
	{
		temp = n;

		for (i = 1; i < count; i++)
		{
			temp = temp / 10;
		}
		digit = temp % 10;
		count--;
		_putchar(digit + '0');
	}
}
