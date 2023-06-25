#include "main.h"
/**
 * cap_string- capitalizes all the words
 *
 * @s: string
 *
 * Return: char
 */
char *cap_string(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		if (s[count] <= 122 && s[count] >= 97)
		{
			if (s[count - 1] == ' ' || s[count - 1] == '.' || s[count - 1] == ';' ||
			s[count - 1] == ',' || s[count - 1] == '!' || s[count - 1] == '"' ||
			s[count - 1] == '?' || s[count - 1] == '(' || s[count - 1] == ')' ||
			s[count - 1] == '{' || s[count - 1] == '}' || count == 0 ||
			s[count - 1] == '\t')
			{
				s[count] = s[count] - 32;
			}
		}
		count++;
	}
	return (s);
}
