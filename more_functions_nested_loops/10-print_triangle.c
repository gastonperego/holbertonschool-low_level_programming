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
	int n, m;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		for (n = 0; n < size; n++)
		{
			for (m = size -n; m > 1; --)
			{
				_putchar(' ');
			}
			for (m = n; m >= 0; m--)
			{	
			_putchar('#');
			_putchar('\n');
			}
		}
	}
}
