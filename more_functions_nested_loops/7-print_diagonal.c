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
	int m;

	if (n > 0)
	{
		for (m = 0; m < n; m++)
		{
			for (; m < n;)
			{
			_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	} 
	_putchar('\n');
}
