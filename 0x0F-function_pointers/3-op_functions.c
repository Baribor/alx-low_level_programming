#include <stdio.h>
#include <stdlib.h>

/**
 * op_mul - returns the product of two integers.
 * @a: The first integer
 * @b: The second integer
 * Return: The product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the division of two integers.
 * @a: The first integer
 * @b: The second integer
 * Return: The division of a and b
 */
int op_div(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_sub - returns the difference between two integers.
 * @a: The first integer
 * @b: The second integer
 * Return: The difference between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_add - returns the sum of two integers.
 * @a: The first integer
 * @b: The second integer
 * Return: The sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_mod - returns the remainder of the division of two integers.
 * @a: The first integer
 * @b: The second integer
 * Return: The remainder of the division of a and b
 */
int op_mod(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
