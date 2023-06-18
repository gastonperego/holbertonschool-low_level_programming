#include "main.h"
/**
 * print_alphabet_x10- Print the alphabet 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char a = 'a';
	char A = '0';

	for (; A <= 57;)
	{
		_putchar(a);
		if (a < 'z')
		{
			a++;
		} else
		{
			a = 'a';
			A++;
		}
		_putchar('\n');
	}
}
