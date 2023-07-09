#include "main.h"
#include <stdlib.h>
/**
 * _strlen- return the length of a string
 *
 * @st: string
 *
 * Return: int
 */
int _strlen(char *st)
{
	int c = 0;

	if (!st)
	{
		return ('\0');
	}
	else
	{
		while (st[c] != '\0')
		{
			c++;
		}
	}
	return (c);
}
/**
 * string_nconcat- concatenates the first string to n characters of the second
 *
 * @s1: string 1
 * @s2: string 2
 * @n: number of characters of the string 2 to be copied
 *
 * Return: pointer to the allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lens1 = _strlen(s1);
	unsigned int lens2 = _strlen(s2);
	unsigned int len, c, c2;
	char *s;

	if (lens2 < n)
	{
		len = lens2;
	}
	else
	{
		len = n;
	}
	s = malloc(sizeof(char) * (lens1 + len + 1));
	if (s == NULL)
		return ('\0');
	c = 0;
	c2 = 0;
	if (lens1 != '\0')
	{
		while (c < lens1)
		{
			s[c] = s1[c];
			c++;
		}
	}
	if (len != '\0')
	{
		while (c < len)
		{
			s[c] = s2[c2];
			c++, c2++;
		}
	}
	return (s);
}
