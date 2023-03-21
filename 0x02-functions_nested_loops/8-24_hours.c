#include "main.h"

/**
 * jack_bauer - prints every minutes of the day of Jack
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hour, minute, i;
	int minutes = 1440;

	for (i = 0; i < minutes; ++i)
	{
		minute = i % 60;
		hour = (i / 60) % 24;

		if (hour < 10)
		{
			_putchar('0');
			_putchar('0' + hour);
		}
		else
		{
			_putchar('0' + (hour / 10));
			_putchar('0' + (hour % 10));
		}
		_putchar(':');
		if (minute < 10)
		{
			_putchar('0');
			_putchar('0' + minute);
		}
		else
		{
			_putchar('0' + (minute / 10));
			_putchar('0' + (minute % 10));
		}
		_putchar('\n');
	}
}
