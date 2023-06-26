#include "main.h"
/**
 * _strspn- Returns the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 *
 * @s:string
 * @accept: array of characters to search in the string
 *
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int count2;
	unsigned int length = 0;

	while (s[count] != '\0')
	{
		for (count2 = 0; accept[count2] != '\0'; count2++)
		{
			if (s[count] == accept[count2])
			{
				length++;
				break;
			}
			else if (accept[count2 + 1] == '\0')
			{
				return (length);
			}
		}
		count++;
	}
	return (length);
}
