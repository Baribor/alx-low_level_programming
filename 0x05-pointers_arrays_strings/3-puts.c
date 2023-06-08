#include "main.h"

/**
 * _puts - Prints a string to standard output
 * @str: Pointer to the string array of characters
 * Return: Nothing
 */
void _puts(char *str)
{
	char c;
	int n = 0;

	while (1)
	{
		c = *(str + n);
		if (c == '\0')
			break;
		_putchar(c);
		n++;
	}
	_putchar('\n');
}
