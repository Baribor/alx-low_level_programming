#include "main.h"

/**
 * print_chessboard - Function that prints the chessboard
 * @a: A two diamensional array of bytes representing
 * each squares on the board
 * Return: Nothing.
 */
void print_chessboard(char (*a)[8])
{
	int r, c;

	for (r = 0; r < 8; ++r)
	{
		for (c = 0; c < 8; ++c)
		{
			_putchar(a[r][c]);
		}
		_putchar('\n');
	}
}
