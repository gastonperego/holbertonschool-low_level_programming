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
	int c;

	for (c = '0'; *s != '\0';)
	{
		c++;
	}
	return (c);
}
