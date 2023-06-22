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
	int fijo2;

	for (length = 0; str[length] != '\0';)
	{
		length++;
	}
	fijo = length / 2;
	fijo2 = length - 1;
	if ((length % 2) == 0)
	{
		while (fijo < length)
		{
			_putchar(str[fijo]);
			fijo++;
		}
	}
	else
	{
		while ((fijo2 / 2) < length)
		{
			_putchar(str[fijo]);
			fijo++;
		}
	}
	_putchar('\n');
}
