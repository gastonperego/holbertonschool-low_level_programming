#include "main.h"
/**
 *  more_numbers- print numbers from 0 to 14 10 times
 *
 *  Return: 0
 */
void more_numbers(void)
{
	int a = 0;
	int b = 0;

	for (; a <= 9; a++)
	{
		for (; b < 15; a++)
		{
			if (b > 9)
			{
				_putchar('0' + (b / 10));
			}
			_putchar('0' + (b % 10));
			if (b == 14)
			{
				_putchar('\n');
			}
		}
	}
}
