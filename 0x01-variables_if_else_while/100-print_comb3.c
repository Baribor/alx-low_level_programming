#include <stdio.h>

/**
 * main - The main entry point.
 *
 * Description: prints all possible combinations of single-digit numbers.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0,
	j;
	while (i < 10)
	{
		j = i;

		while (j < 10)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (!(i == 9 && j == 9))
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
