#include "main.h"

/**
 * _islower - checks if a character is lowercase or not.
 *
 * @c: A character to check
 * Return: 1 if true else 0
 */
int _islower(int c)
{
	if (c < 97 || c > 122)
	{
		return (0);
	}
	return (1);
}
