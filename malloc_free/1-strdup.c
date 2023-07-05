#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup- return a pointer to a copy of a string
 *
 * @str: string to copy
 *
 * Return: puntero
 */
char *_strdup(char *str)
{
	char *s;
	int count = 1;
	int count2 = 0;

	if (str == NULL)
	{
		return ('\0');
	}
	for (; str[count] != '\0';)
	{
		count++;
	}
	s = malloc(sizeof(char) * count);
	if (s == NULL || s == 0)
	{
		return ('\0');
	}
	for (; count2 <= count; count2++)
	{
		s[count2] = str[count2];
	}
	return (s);
}
