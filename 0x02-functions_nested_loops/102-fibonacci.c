#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	unsigned long f = 1, s = 2, nxt;
	int n = 2;

	printf("%lu, %lu, ", f, s);

	while (n < 50)
	{
		nxt = f + s; 
		printf("%lu, ", nxt);
		f = s;
		s = nxt;
		n++;
	}
	nxt = f + s;
	printf("%lu\n", nxt);
	return (0);
}
