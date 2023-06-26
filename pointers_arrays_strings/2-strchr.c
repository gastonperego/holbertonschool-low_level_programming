#include "main.h"
/**
 * _strchr- Returns a pointer to the first occurrence of the character c in
 * the string s, or NULL if the character is not found
 *
 * @s: string where the programm will look for the character c
 * @c: character to look for
 *
 * Return: char
 */
char *_strchr(char *s, char c)
{
	int count = 0;

	while (s[count] != c && s[count] != '\0')
	{
		count++;
	}
	if (s[count] == c)
	{
		return (&s[count]);
	}
	return ('\0');
}
