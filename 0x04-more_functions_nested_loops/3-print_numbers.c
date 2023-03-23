#include "main.h"

/**
 * print_numbers - Prints numbers from 0-9
 *
 * Return: Nothing
 */
void print_numbers(void)
{
	char n = '0';

	while (n <= '9')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
