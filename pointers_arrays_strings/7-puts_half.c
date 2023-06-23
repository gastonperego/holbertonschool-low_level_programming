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
	largo = length + 1;
	for (; largo / 2 < length; largo++)
	{
		_putchar(str[largo]);
	}
}
