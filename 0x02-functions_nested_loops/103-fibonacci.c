#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int f = 1;
	int s = 2;
	int sum = 2;
	int n = 3;
	int nxt;

	while (1)
	{
		nxt = f + s;

		if (nxt >= 4000000)
			break;

		if (n % 2 == 0)
			sum += nxt;


		f = s;
		s = nxt;
		n++;
	}

	printf("%d\n", sum);

	return (0);

}
