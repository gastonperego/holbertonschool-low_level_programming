#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat- concatenates a number of characters of 2 strings and returns
 * a pointer
 *
 * @s1: string to add characters
 * @s2: string from where the character will be added
 * @n: number of characters to be added
 *
 * Return: pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int c = 0;
	unsigned int c2 = 0;
	unsigned int len;

	if (s1)
	{
		for (; s1[c] != '\0';)
			c++;
	}
	if (s2)
	{
		for (; s2[c2] != '\0';)
			c2++;
	}
	if (n < c2)
		len = n;
	else
		len = c2;
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return ('\0');
	if (s1)
	{
		for (c = 0; s1[c] != '\0'; c++)
			s[c] = s1[c];
	}
	if (s2)
	{
		for (c2 = 0; c < len; c2++, c++)
			s[c] = s2[c2];
	}
	return (s);

}
