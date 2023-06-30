#include "main.h"
/**
 * _strlen- return the length of a string
 *
 * @s: s
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int c = 0;

	for (; s[c] != '\0';)
	{
		c++;
	}
	return (c);
}
