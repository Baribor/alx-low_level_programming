#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the product of two integers passed as arguments
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 (Success) 1 (Error)
 */
int main(int argc, char *argv[])
{
	int f, s;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	f = atoi(argv[1]);
	s = atoi(argv[2]);

	printf("%d\n", f * s);
	return (0);
}
