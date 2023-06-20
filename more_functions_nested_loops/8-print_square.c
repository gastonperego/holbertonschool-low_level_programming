#include "main.h"
/**
 * print_square- print a square of #
 *
 * @size: size of the square
 *
 * Return: 0
 */
void print_square(int size)
{
	int a;
	int l;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 0; l < size; l++)
		{
			for (a = 0; a < size; a++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
