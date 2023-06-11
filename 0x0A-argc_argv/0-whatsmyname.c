#include <stdio.h>

/**
 * main - prints the name of the file executed
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	char *fn = argv[0];

	(void) argc;
	printf("%s\n", fn);
	return (0);
}
