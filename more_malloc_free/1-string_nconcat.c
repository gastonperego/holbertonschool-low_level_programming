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
	unsigned int c = 0;
	unsigned int c2 = 0;
	char *s;
	unsigned int len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (; s1[c] != '\0';)
		c++;
	for (; s2[c2] != '\0';)
		c2++;
	if (n < c2)
		len = c + n + 1;
	else
		len = c + c2 + 1;
	s = malloc(sizeof(char) * len);
	if (s == NULL)
		return (NULL);

	for (c = 0; s1[c] != '\0'; c++)
		s[c] = s1[c];
	for (c2 = 0; c < n; c++, c2++)
		s[c] = s2[c2];

	return (s);
}
