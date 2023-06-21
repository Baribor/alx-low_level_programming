#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - program that performs simple operations
 * @argc: argument counter
 * @argv: Argument values
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int (*f)(int, int);
	int result, left, right;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	left = atoi(argv[1]);
	right = atoi(argv[3]);

	if (left == 0 && (*(argv[2]) == '/' || *(argv[2]) == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	f = get_op_func(argv[2]);

	if (!f)
	{
		printf("Error\n");
		exit(99);
	}
	result = f(left, right);
	printf("%d\n", result);
	return (0);
}
