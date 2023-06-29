#include "main.h"
/**
 * _strlen_recursion- returns the length of a string.
 *
 * @s: string
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion);
	}
	if (*s == '\0')
	{
		_strlen_recursion == 0;
	}
	return (0);
}
