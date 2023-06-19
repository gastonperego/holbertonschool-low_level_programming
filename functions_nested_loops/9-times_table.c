#include "main.h"
/**
 * times_table - Print las tablas del uno al 9
 *
 * Return: 0;
 */
void times_table(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			int pd = (a * b) / 10;
			int ud = (a * b) % 10;

			if (pd != 48)
			{
			_putchar('0' + pd);
			} else 
			{
				_putchar(' ');
			}
			_putchar('0' + ud);
			_putchar(',');
			_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
