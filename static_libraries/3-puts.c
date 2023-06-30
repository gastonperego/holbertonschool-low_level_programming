#include "main.h"
/**
 * _puts- prints a string in the st output
 *
 * @str: string
 *
 * Return: 0
 */
void _puts(char *str)
{
	int c = 0;

	for (; str[c] != '\0'; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
