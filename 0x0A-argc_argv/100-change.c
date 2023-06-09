#include <stdio.h>
#include <stdlib.h>

/**
 * main - The main entry point.
 * @argc: The number of arguments passed.
 * @argv: An array of all arguments passed.
 * Description: prints the minimum number of coins to make
 * change for an amount of money.
 * Return: 1 always.
 */
int main(int argc, char const *argv[])
{
	int amt;
	int coins[] = {25, 10, 5, 2, 1};
	int c = 0, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amt = atoi(argv[1]);

	if (amt < 0)
	{
		printf("0\n");
	}
	else
	{

		for (i = 0; i < 5; ++i)
		{
			while (amt >= coins[i])
			{
				c++;
				amt -= coins[i];
			}
		}

		printf("%d\n", c);
	}
	return (1);
}
