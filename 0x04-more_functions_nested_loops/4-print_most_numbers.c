#include "main.h"

/**
 * print_most_numbers - Print numbers from 0-9 skipping 2 and 4
 *
 * Return - Nothing
 */
void print_most_numbers(void)
{
	char n = '0';

	while (n <= '9')
	{
		if (n == '2' || n == '4')
		{
			n++;
			continue;
		}
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
