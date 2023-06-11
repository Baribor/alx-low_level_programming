#include <stdio.h>
#include <stdlib.h>

/**
 * isAllDigits - Checks if a string contains only digits.
 * @s: The pointer to the string
 * Return: 1 if all digits else 0
 */
int isAllDigits(char *s)
{
	int i = 0;
	char c;

	while (s[i] != '\0')
	{
		c = s[i++];
		if (!(c >= 48 && c <= 57))
		{
			return (0);
		}
	}

	return (1);
}

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
		if (!isAllDigits(argv[i]))
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
