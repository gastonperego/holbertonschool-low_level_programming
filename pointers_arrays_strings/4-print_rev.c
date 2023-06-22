#include "main.h"
/**
 * print_rev- print a string in reverse
 *
 * @s: the string
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int c = 0;
	int *p = &c;

	for (; s[c] != '\0';)
	{
		c++;
		*p = c;
	}
	for (; s[c] != '\0'; c--)
	{
		_putchar(c);
	}
	_putchar('\n');
}
