#include "main.h"
/**
 * fizzbuzz- f
 *
 * Return: 0
 */
void fizzbuzz(void)
{
	int n;

	for (n = 0; n <= 100; n++)
	{
		if (n % 3 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
		}
		else if (n % 5 == 0)
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		} else
		{
			_putchar(n);
		}
	}
}

