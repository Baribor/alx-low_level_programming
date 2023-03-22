#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i, n = 50;
	long long int fib[50];

	fib[0] = 1;
	fib[1] = 2;

	for (i = 2; i < n; ++i)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	for (i = 0; i < n; ++i)
	{
		printf("%lld", fib[i]);

		if (i < 49)
		{
			printf(", ");
		}
	}

	putchar('\n');
	return (0);
}
