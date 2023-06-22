#include "main.h"
/**
 * rev_string- revert a string
 *
 * @s: string to revert
 *
 * Return: 0
 */
void rev_string(char *s)
{
	int c = 0;

	for (; s[c] != '\0';)
	{
		c++;
	}
	for (; c > 0; c--)
	{
		_putchar(c);
	}
}
