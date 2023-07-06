#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat- concatenates 2 strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: string
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int count = 0;
	int count2 = 0;
	int count3 = 0;

	for (; s1[count] != '\0';)
	{
		count++;
	}
	for (; s2[count2] != '\0';)
	{
		count2++;
	}
	if (s1 == NULL)
	{
		count = 0;
	}
	if (s2 == NULL)
	{
		count2 = 0;
	}
	s = malloc((sizeof(char) * count) + (sizeof(char) * (count2 + 1)));
	if (s == NULL)
	{
		return ('\0');
	}
	for (count = 0; s1[count] != '\0'; count3++, count++)
	{
		s[count3] = s1[count];
	}
	for (count2 = 0; s2[count2] != '\0'; count3++, count2++)
	{
		s[count3] = s2[count2];
	}
	return (s);
}
