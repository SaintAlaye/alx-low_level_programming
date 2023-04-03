#include "main.h"
/**
 * print_chessboard - print chessboard
 * @a: 2 dimension array to print
 */
void print_chessboard(char (*a)[8])
{
	int i, j;
	/* iterating through the loops */
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
