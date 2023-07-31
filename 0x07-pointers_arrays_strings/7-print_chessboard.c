#include "main.h"


/**
 * print_chessboard - func prints chessboard
 * @a: size of 2D array
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			if (j == 7)
				_putchar('\n');
			j++;
		}
		i++;
	}
}
