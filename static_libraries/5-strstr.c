#include "main.h"
/**
 * _strstr-  function finds the first occurrence of the substring needle in
 * the string haystack. The terminating null bytes (\0) are not compared
 *
 * @haystack: dfs
 * @needle: sf
 *
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	int count = 0;
	int count2;
	char *address = '\0';


	if (needle[0] == '\0')
	{
		return (haystack);
	}
	while (haystack[count] != '\0')
	{
		for (count2 = 0; needle[count2]; count2++)
		{
			if (haystack[count] == needle[count2])
			{
				if (count2 == 0)
				{
				address = &haystack[count];
				}
				else if (needle[count2 + 1] == '\0')
				{
					return (address);
				}
			}
		}
		count++;
	}
	return ('\0');
}
