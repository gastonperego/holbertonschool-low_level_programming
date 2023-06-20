#include "main.h"
#include <stdio.h>
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
			putchar('F');
			putchar('i');
			putchar('z');
			putchar('z');
		}
		if (n % 5 == 0)
		{
			putchar('B');
			putchar('u');
			putchar('z');
			putchar('z');
		} else
		{
			putchar(n);
		}
	}
	putchar('\n');
}

