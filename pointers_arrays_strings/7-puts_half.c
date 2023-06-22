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
	int par = length / 2;
	if ((length % 2) == 0)
	{
		while (par < length)
		{
			_putchar(str[par]);
			par++;
		}
	}
	else
	{
		while ((par - 1) < length)
		{
			_putchar(str[par]);
			par++;
		}
	}
	_putchar('\n');
}
