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

	for (; A <= 57 && a = 'z'; A++)
	{
		for (; a <= 'z';)
		{
			if (a < 'z')
			{
				a++;
			} else
				a = 'a';
		}
		_putchar(a);
	}
	_putchar('\n');
}
