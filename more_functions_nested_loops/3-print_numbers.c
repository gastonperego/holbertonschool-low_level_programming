#include "main.h"
/**
 * print_numbers- Print from 0 to 9
 *
 * REturn: 0
 */
void print_numbers(void)
{
	int a = '0';

	for (; a <= 9; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
