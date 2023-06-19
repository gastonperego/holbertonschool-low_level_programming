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
	int b = a * -1;

	if (a >= 0)
	{
		return (a);
	}
	return (b);
}
