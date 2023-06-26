#include "main.h"
/**
 * print_chessboard- print a chessboard
 *
 * @a:board
 *
 * Return: board
 */
void print_chessboard(char (*a)[8])
{
	int row = 0;
	int col;

	for (; row <= 8; row++)
	{
		for (col = 0; col <= 8; col++)
		{
			_putchar(a[row][col]);
		}
	}
}
