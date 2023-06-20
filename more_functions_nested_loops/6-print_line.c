#include "main.h"
/**
 *  print_line- print a line
 *
 *  @n: the large of the line
 *
 *  Return:0
 */
void print_line(int n)
{
	int m = '0';

	if (n <= '0')
	{
		_putchar('\n');
	}
	else
	{
		for (; m > n; m++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
