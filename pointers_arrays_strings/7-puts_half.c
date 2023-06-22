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
	int fijo;

	for (length = 0; str[length] != '\0';)
	{
		length++;
	}
	fijo = length - 1;
	if ((length % 2) == 0)
	{
		while ((fijo / 2) < length)
		{
			_putchar(str[fijo]);
			fijo++;
		}
	}
	else
	{
		while (((fijo - 1) / 2) < length)
		{
			_putchar(str[fijo]);
			fijo++;
		}
	}
	_putchar('\n');
}
