#include <stdio.h>
#include "main.h"

/**
 * print_num - print an integer digit by digit.
 *
 * @num: integer to printr
 * Return: void
 */
void print_num(int num)
{
	int digit, count = 0, temp = num, i;

	if (num == 0)
	{
		_putchar(num + '0');
		return;
	}

	while (temp > 0)
	{
		count++;
		temp = temp / 10;
	}

	while (count > 0)
	{
		temp = num;

		for (i = 1; i < count; i++)
		{
			temp = temp / 10;
		}
		digit = temp % 10;
		count--;
		_putchar(digit + '0');
	}
}
/**
 * print_times_table - prints the times table from 0 - n
 *
 * @n: The stop table no
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, prod;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; ++i)
	{

		for (j = 0; j <= n; ++j)
		{
			prod = i * j;

			if (j > 0)
			{
				_putchar(',');
				_putchar(' ');
				if (prod <= 9)
					_putchar(' ');
				if (prod <= 99)
					_putchar(' ');
			}

			print_num(prod);

			}
		_putchar('\n');
	}
}
