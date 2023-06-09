#include <string.h>

/**
 * check_palindrome - Checks if a string is palindrome recursively
 * @s: The pointer to the string
 * @l: Left index. Typically starts from 0
 * @r: Right index. Typically starts from the last index of the string
 * Return: 1 if palindrome else 0
 */
int check_palindrome(char *s, int l, int r)
{
	if (s[l] != s[r])
		return (0);

	if (r - l == 1 || r - l == 0)
		return (1);

	return (check_palindrome(s, l + 1, r - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: Pointer to the string
 * Return: 1 if palindrome else 0
 */
int is_palindrome(char *s)
{
	int len;

	len = strlen(s);

	if (s == NULL)
		return (0);

	return (check_palindrome(s, 0, len - 1));
}
