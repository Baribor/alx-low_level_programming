#include <stdio.h>

/**
 * main - The main entry point.
 *
 * Description: prints the lowercase alphabet in
 * reverse, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
