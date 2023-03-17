#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - The main entry point.
 *
 * Description: prints random numbers and say
 * if it's positive, negaive or zero.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("%d is negative", n);
	}
	else if (n == 0)
	{
		printf("%d is zero");
	}
	else
	{
		printf("%d is positive");
	}
	return (0);
}
