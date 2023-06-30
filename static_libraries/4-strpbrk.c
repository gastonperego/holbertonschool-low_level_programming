#include "main.h"
/**
 * _strpbrk- Returns a pointer to the first occurrence one of the elements of
 * an array accept in the string s, or NULL if the character is not found
 *
 * @s: string where the programm will look for the character c
 * @accept: array of elements to look for
 *
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	int count = 0;
	int count2;

	while (s[count] != '\0')
	{
		for (count2 = 0; accept[count2] != '\0'; count2++)
		{
			if (s[count] == accept[count2])
			{
				return (&s[count]);
			}
		}
		count++;
	}
	return ('\0');
}
