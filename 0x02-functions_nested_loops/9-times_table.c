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
 * times_table - printts the time time from 0 - 9
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, prod;

	for (i = 0; i < 10; ++i)
	{

		for (j = 0; j < 10; ++j)
		{
			prod = i * j;

			if (j > 0)
			{
				_putchar(',');
				_putchar(' ');
				if (prod <= 9)
					_putchar(' ');
			}

			print_num(prod);

			}
		_putchar('\n');
	}
}
