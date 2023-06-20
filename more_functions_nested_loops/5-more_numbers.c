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
		for (; a < 15; a++)
		{
			if (a > 9)
			{
				_putchar(a / 10);
			}
			_putchar(a % 10);
			if (a == 14)
			{
				_putchar('\n');
			}
		}
	}
}
