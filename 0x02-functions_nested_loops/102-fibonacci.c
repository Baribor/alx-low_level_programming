#include <stdio.h>

#define MOD 1000000000

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int f = 1,  s = 2, nxt, n = 2;

	printf("%d, %d, ", f, s);

	while (n < 50)
	{
		nxt = (f + s) % MOD;
		printf("%d, ", nxt);
		f = s;
		s = nxt;
		n++;
	}
	nxt = (f + s) % MOD;
	printf("%d\n", nxt);
	return (0);
}
