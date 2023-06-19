#include "main.h"
/**
 *  print_last_digit- print the last digit
 *
 *  @c: input
 *
 *  Return: 0
 */
int print_last_digit(int c)
{
	int a = c % 10;

	if (a < 0)
	{
		a = a * -1;
	}
	_putchar('0' + a);
	return (a);
}
