#include "main.h"
/**
 * _islower- Prints "1" if c is lowercas, prints "0" otherwise
 *
 * @c: The character to evaluate
 *
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		_putchar(49);
	} else
	{
		_putchar(48);
	}
	_putchar('\n');
}
