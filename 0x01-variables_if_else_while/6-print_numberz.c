#include <stdio.h>

/**
 * main - The main entry point.
 *
 * Description: prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i / 10 + '0');
		putchar(i % 10 + '0');
		i++;
	}
	return (0);
}
