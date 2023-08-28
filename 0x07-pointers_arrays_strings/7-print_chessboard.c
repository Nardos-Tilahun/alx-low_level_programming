#include "main.h"

/**
 * print_chessboard - entery point
 * @s: second character parameter
 */
void print_chessboard(char (*s)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(s[i][j]);
		}
		_putchar('\n');
	}
}
