#include "main.h"
/**
 *  print_diagonal- print a line
 *
 *  @n: the large of the line
 *
 *  Return:0
 */
void print_diagonal(int n)
{
	int m = 0;

	if (n > 0)
	{
		_putchar(92);
	for (; m < n; m++)
	{
		_putchar(' ');
	}
	_putchar(92);
	_putchar('\n');
	}
}
