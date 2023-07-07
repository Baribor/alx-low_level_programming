#include <stdio.h>

/**
 * get_endianness - Gets the endianness of a machine
 *  Return: 1 if little-endian else 0 if big-endian
 */
int get_endianness(void)
{
	int i = 1;
	char *p = (char *)&i;

	return (p[0] == 1 ? 1 : 0);
}
