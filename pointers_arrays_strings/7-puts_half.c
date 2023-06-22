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
	int largo;

	for (length = 0; str[length] != '\0';)
	{
		length++;
	}
	largo = length;
	if ((largo % 2) == 0)
	{
		while ((largo / 2) < length)
		{
			_putchar("str[largo]");
			largo++;
		}
	}
	else
	{
		while (((largo - 1) / 2) < length)
		{
			_putchar("str[largo]");
			largo++;
		}
	}
	_putchar('\n');
}
