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
 * more_numbers - Prints the numbers 0-14 ten times
 *
 * Return: Nothing
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; ++i)
	{
		for (j = 0; j <= 14; ++j)
		{
			print_num(j);
		}
		_putchar('\n');
	}
}
