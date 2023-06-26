#include "main.h"
/**
 * _strchr- Returns a pointer to the first occurrence of the character c in
 * the string s, or NULL if the character is not found
 *
 * @s: string where thw program will look for the character c
 * @c: character to look for
 *
 * Return: char
 */
char *_strchr(char *s, char c)
{
	int count = 0;
	char m;
	int count2 = 0;

	while (s[count] != c)
	{
		count++;
	}
	if (s[count] == c)
	{
		while (s[count] != '\0')
		{
		m[count2] = s[count];
		count2++;
		}
		return (s);
	}
	return ('\0');
}
