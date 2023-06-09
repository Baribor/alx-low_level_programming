#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	int c = 0;

	while (c < argc)
	{
		printf("%s\n", argv[c]);
		c++;
	}
	return (0);
}
