#include <string.h>
#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: pointer to the string array of characters
 * Return: Nothing
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int n = (len % 2 == 0) ? len / 2 : (len / 2) + 1;

	while (1)
	{
		if (*(str + n) == '\0')
			break;
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}
