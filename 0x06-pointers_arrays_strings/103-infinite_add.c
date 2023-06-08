#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * rev_string - Reverses a string in-place
 * @s: pointer to the string array of characters
 * Return: Nothing
 */
void rev_string(char *s)
{
	int len = strlen(s), mid, i;
	char temp;

	mid = len / 2;

	for (i = 0; i < mid; ++i)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}


/**
 * infinite_add - adds two lengthy numbers.
 *
 * @n1: first number.
 * @n2: second number.
 * @r: Answer buffer
 * @size_r: Size of buffer
 * Return: Pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int s1 = strlen(n1), s2 = strlen(n2);
	int mx = s1 > s2 ? s1 : s2;
	int fd = 0, sd = 0, ri = 0;
	int carry = 0, sum;

	if (mx >= size_r)
		return (0);

	while (s1 || s2)
	{
		fd = 0;
		sd = 0;

		if (s1)
			fd = n1[--s1] - '0';

		if (s2)
			sd = n2[--s2] - '0';

		sum = fd + sd + carry;
		r[ri++] = '0' + (sum % 10);
		carry = 0;

		if (sum > 9)
			carry = sum / 10;

	}

	if (carry)
	{
		if (size_r - ri < 2)
			return (0);
		r[ri++] = '0' + carry;
	}

	rev_string(r);
	r[ri] = '\0';
	return (r);
}
