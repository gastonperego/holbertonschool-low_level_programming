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

	while (*s1)
	{
		count++;
	}
	while (*s2)
	{
		count2++;
	}
	s = malloc((sizeof(char) * count) + (sizeof(char) * (count2 + 1)));
	for (; count3 < count; count3++)
	{
		s[count3] = s1[count];
	}
	for (; count3 < (count + count2); count3++)
	{
		s[count3] = s2[count2];
	}
	return (s);
}
