#include "main.h"

/**
 * puts2 - Prints half a str starting from the first char and skips one step.
 * @str: Pointer to the string array of characters.
 * Return: Nothing
 */
void puts2(char *str)
{
	int len = 0;

	while (1)
	{
		if (*(str + len) == '\0')
			break;
		if (len % 2 == 0)
			_putchar(*(str + len));
		len++;
	}
	_putchar('\n');
}
