#include "main.h"
/**
 * print_binary- prints an unsigned int in binary
 *
 * @n: unsigned int
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int a = 1, copy = n;
	int len = 0;

	while (copy != 0)
	{
		copy = copy >> 1;
		len++;
	}
	len--;

	if (len > 0)
		a = a << len;

	while (a != 0)
	{
		if ((n & a) != 0)
			_putchar('1');
		else
			_putchar('0');
		a = a >> 1;
	}
}
