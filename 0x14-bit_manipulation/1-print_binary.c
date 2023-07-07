#include "main.h"

/**
 * _print_binary - Prints a binary rep of n
 * @n: Base 10 number to print in binary
 * Return: Void always
 */
void _print_binary(unsigned long int n)
{
	unsigned long int left;

	if (!n)
		return;

	left = n >> 1;
	_print_binary(left);
	_putchar('0' + (n - (left * 2)));
}

/**
 * print_binary - Prints a binary rep of n
 * @n: Base 10 number to print in binary
 * Return: Void always
 */
void print_binary(unsigned long int n)
{
	if (!n)
	{
		_putchar('0');
		return;
	}

	_print_binary(n);
}
