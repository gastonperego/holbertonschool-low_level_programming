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
			_putchar('0' + ((a * b) / 10));
			_putchar('0' + ((a * b) % 10));
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
