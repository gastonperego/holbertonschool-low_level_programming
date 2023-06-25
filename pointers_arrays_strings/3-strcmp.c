#include "main.h"
/**
 * _strcmp- compare 2 strings
 *
 * @s1: frist string
 * @s2: second string
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int count = 0;
	char n;

	while (s1[count] != '\0' && s2[count] != '\0')
	{
		if (s1[count] == s2[count])
		{
			count++;
		}
		else
		{
			n = (s1[count] - s2[count]);
		}
		return (n);
	}
	return (0);
}
