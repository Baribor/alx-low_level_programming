#include <stdio.h>

/**
 * main - Prints the first 98 fibonacci numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	unsigned long a = 1, b = 2, c;
	int count = 2;

	printf("%lu, %lu, ", a, b);

	while (count < 97)
	{
		c = a + b;
		printf("%lu, ", c);
		a = b;
		b = c;
		count++;
	}

	c = a + b;
	printf("%lu\n", c);

	return (0);
}
