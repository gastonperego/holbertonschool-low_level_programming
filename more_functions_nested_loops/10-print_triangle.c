#include "main.h"
/**
 * print_triangle- prinst a triangle
 *
 * @size: input
 *
 * Return: 0
 */
void print_triangle(int size)
{
	int n, m, a;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		for (n = 0; n < size; n++)
		{
			for (m = 0; m < size; m++)
			{
				for (a = 0; a < size && m < size; a++)
				{
					_putchar(' ');
				}
			}
			_putchar('#');
		}
		_putchar('\n');
	}
}
