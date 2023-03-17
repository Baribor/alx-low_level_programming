#include <stdio.h>

/**
 * main - The main entry point.
 *
 * Description: prints all the numbers of base 16 in lowercase, followed by a
 * new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hex[] = "0123456789abcdef";
	int i = 0;

	while (i < 16)
	{
		putchar(hex[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
