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

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0;a < size; a++)
		{
			_putchar('#');
		}
		for (; a == size;)
		{
			_putchar('\n');
		}
	}
}		
