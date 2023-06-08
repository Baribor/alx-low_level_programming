#include <stdio.h>

/**
 * main - The main entry point.
 *
 * Description: prints all possible combinations of two two-digit numbers.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0,
	j, k, l;

	while (i < 10)
	{
		j = i;

		while (j < 10)
		{
			k = j;

			while (k < 10)
			{
				l = k;

				while (l < 10)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(l + '0');

					if (!(i == 9 && j == 9 && k == 9 &&  l == 9))
					{
						putchar(',');
						putchar(' ');
					}
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
