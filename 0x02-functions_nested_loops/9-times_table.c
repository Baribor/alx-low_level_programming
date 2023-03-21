#include "main.h"

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
			if (prod < 10)
			{
				_putchar('0' + prod);
			}
			else
			{
				_putchar('0' + (prod / 10));
				_putchar('0' + (prod % 10));
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
				if (prod < 10)
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
