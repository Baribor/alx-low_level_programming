#include <stdio.h>

/**
 * main - The main entry point.
 *
 * Description: prints all possible combinations of three digit numbers.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0,
	j, k;

	while (i < 8)
	{
		j = i + 1;

		while (j < 9)
		{
			k = j + 1;

			while (k < 10)
			{

				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');

				if (!(i == 9 && j == 9 && k == 9))
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
}
