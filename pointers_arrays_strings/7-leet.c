#include "main.h"
/**
 * leet - Encodes the string into 1337
 *
 * @s:string
 *
 * Return: char
 */
char *leet(char *s)
{
	int count = 0;
	int count2;
	char letter[5] = {'a', 'e', 'o', 't', 'l'};
	char num[5] = {'4', '3', '0', '7', '1'};

	while (s[count] != '\0')
	{
		for (count2 = 0; count2 < 5; count2++)
		{
			if (s[count] == letter[count2] || s[count] == letter[count2] - 32)
			{
				s[count] = num[count2];
			}
		}
		count++;
	}
	return (s);
}
