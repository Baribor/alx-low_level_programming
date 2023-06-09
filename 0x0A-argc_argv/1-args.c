#include <stdio.h>

/**
 * main - prints the number of arguments passed
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
