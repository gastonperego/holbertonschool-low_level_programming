#include "main.h"
/**
 *  print_alphabet- Print the alphabet followed by a new line
 *
 *  Return: 0
 */
void print_alphabet(void)
{
	char a = 'a';

	for (; a <= 'z'; a++)
	{
	_putchar(a);
	}
	_putchar('\n');
}
