#include "main.h"
/**
 * times_table - Print las tablas del uno al 9
 *
 * Return: 0;
 */
void times_table(void)
{
	int a = 0;
	int b = 0;

	for (; a < 10; a++)
	{
		for (; b < 10; b++)
		{
			_putchar('0' + (a * b));
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
