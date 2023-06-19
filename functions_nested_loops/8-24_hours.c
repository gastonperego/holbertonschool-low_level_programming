#include "main.h"
/**
 *  jack_bauer- Prints every minute of the day
 *
 *  Return: 0
 */
void jack_bauer(void)
{
	int a = 0;
	int b = 0;

	for (a = 0; a < 24; a++)
	{
		for (b = 0; b < 60; b++)
		{
			_putchar('0' + (a / 10));
			_putchar('0' + (a % 10));
			_putchar(':');
			_putchar('0' + (b / 10));
			_putchar('0' + (b % 10));
			_putchar('\n');
		}
	}
}
