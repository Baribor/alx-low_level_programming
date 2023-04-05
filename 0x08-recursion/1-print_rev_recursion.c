#include "main.h"

/**
 * _print_rev - Prints a string in reverse order using recursion
 * @s: pointer to the string array of characters
 * @i: Start index
 * Return: Nothing
 */
void _print_rev(char *s, int i)
{
	if (*(s + i) == '\0')
		return;
	_print_rev(s, i + 1);
	_putchar(*(s + i));
}

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to the string
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	_print_rev(s, 0);
}
