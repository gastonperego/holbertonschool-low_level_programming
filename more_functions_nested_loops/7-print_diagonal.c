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
	int e;

	if (n <= 0)
	{
		_putchar('\n');
	} else 
	{
		for (e = 0; e < n; e++)
		{
			for (m = 0; m < n; m++)
			{
				_putchar(' ');
			}	
		}
	}
}
