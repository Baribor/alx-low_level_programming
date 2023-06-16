#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _isdigit - Checks if a character is a digit.
 *
 * @c: The character to check.
 * Return: 1 if true else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

/**
 * check_all_digits - Checks if all char are digits
 * @s: Pointer to the memory area
 * Return: Void
 */
void check_all_digits(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (!_isdigit(s[i++]))
			exit(98);
	}
}

/**
 * fill_reversed - Fill the int arr with the digits of
 * the s in reversed order
 * @s: Source string
 * @a: Destination array
 * @size: Size of the string
 * Return: Void
 */
void fill_reversed(char *s, int *a, int size)
{
	int i, j;

	for (i = size - 1, j = 0; i >= 0; i--, j++)
	{
		a[j] = s[i] - '0';
	}
}

/**
 * create_addition_table - Creates a linear addition table
 * @t: Target int arr
 * @s1: First source
 * @s2: Second source
 * @l1: Length of s1
 * @l2: Lenght of s2
 * Return: Void
 */
void create_addition_table(int *t, int *s1, int *s2, int l1, int l2)
{
	int i, j;

	for (i = 0; i < l2; i++)
	{
		for (j = 0; j < l1; j++)
		{
			t[i + j] += s2[i] * s1[j];
		}
	}
}

/**
 * performAddition - Performs the addition in the addition table
 * @t: Source addition table
 * @l1: length of first integer
 * @l2: length of second integer
 * Return: Void
 */
void performAddition(int *t, int l1, int l2)
{
	int tmp, i;

	for (i = 0; i < l1 + l2; i++)
	{
		tmp = t[i] / 10;
		t[i] = t[i] % 10;
		t[i + 1] = t[i + 1] + tmp;
	}
}

/**
 * print - Prints a string
 * @s: String to print
 * Return: Void
*/
void print(char *s)
{
	int i = 0;

	while (s[i])
		_putchar(s[i++]);
}

/**
 * main - Multiplies arbitary large integers
 * @argc: Argument counter
 * @argv: Arguments passed to the program
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int *a, *b;
	int *ans;
	int i, l1, l2, g;
	char *s1;
	char *s2;

	if (argc != 3)
	{
		print("Error\n");
		exit(98);
	}
	s1 = argv[1];
	s2 = argv[2];

	check_all_digits(s1);
	check_all_digits(s2);

	l1 = strlen(s1);
	l2 = strlen(s2);
	g = l1 > l2? l1:l2;

	a = malloc(sizeof(char) * g);
	if (!a)
		exit(98);

	b = malloc(sizeof(char) * g);
	if (!b)
		exit(98);

	ans = malloc((g + 1) *sizeof(char));

	if (!ans)
		exit(98);

	fill_reversed(s1, a, l1);
	fill_reversed(s2, b, l2);
	create_addition_table(ans, a, b, l1, l2);
	performAddition(ans, l1, l2);

	for (i = l1 + l2; i >= 0; i--)
	{
		if (ans[i] > 0)
			break;
	}

	for (; i >= 0; i--)
	{
		printf("%d", ans[i]);
	}
	_putchar('\n');
	return (0);
}
