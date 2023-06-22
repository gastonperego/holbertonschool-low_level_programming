#include "main.h"
/**
 * puts_half- print the second half of a string
 *
 * @str: string
 *
 * Return: 0
 */
void puts_half(char *str)
{
	int length;

	for (length = 0; str[length] != '\0';)
	{
		length++;
	}
	_putchar(('0' + length));
	/*if ((length % 2) == 0)
	{
		for (; (length / 2) < length; length++)
		{
			_putchar(str[length]);
		}
	}
	else
	{
		for (; (length / 2) - 1 < length; length++)
		{
			_putchar(str[length]);
		}
	}
	_putchar('\n');*/
}
