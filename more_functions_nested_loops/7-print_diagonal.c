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
	int l;

	if (n > 0)
	{
		for (m = 0; m < 98; m++)
		{
			for (l= 0; l < 98; l++)
			{
			_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
       _putchar('\n');	
}
