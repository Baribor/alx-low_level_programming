#include <stdio.h>

/**
 * main - Prints numbers from 1 to 100
 *
 * Description: Prints Fizz if the number is a multiple of 3
 * Prints Buzz if the number is a multiple of 5
 * Prints FizzBuzz if the number is a multiple of both 3 and 5
 * Else, prints the number
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; ++i)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i < 100)
			putchar(' ');
	}
	return (0);
}
