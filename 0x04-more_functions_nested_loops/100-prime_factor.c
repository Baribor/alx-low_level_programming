#include <stdio.h>
#include <stdbool.h>
#include <stdio.h>

#define NUM 612852475143

/**
 * isPrime - Checks if a number is a prime.
 *
 * @n: number to check
 * Return: Always 0 (Success)
 */
bool isPrime(unsigned long n)
{
	unsigned long half = n / 2, i;

	if (n <= 1)
		return (false);

	if (n < 4)
		return (true);

	for (i = half; i > 1; --i)
	{
		if (n % i == 0)
			return (false);
	}

	return (true);
}

/**
 * main - Prints the largest prime factor of 612852475143
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long i;

	for (i = NUM / 2; i > 0; --i)
	{
		if (NUM % i == 0)
		{
			if (isPrime(i))
			{
				printf("%lu\n", i);
				break;
			}
		}
	}

	return (0);
}
