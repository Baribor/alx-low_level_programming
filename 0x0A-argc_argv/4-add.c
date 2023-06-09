#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the sum of all positive integers passed to it
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	int i = 1, sum = 0, nxt;

	while (i < argc)
	{
		if (!isdigit(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		nxt = atoi(argv[i]);
		sum += nxt;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
