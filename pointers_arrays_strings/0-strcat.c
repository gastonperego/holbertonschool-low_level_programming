#include "main.h"
/**
 * _strcat- Concatenate 2 strings
 *
 * @dest: destiny string
 * @src: source string
 *
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int descount = '0';
	int srccount = '0';

	while (dest[descount] != '\0')
	{
		descount++;
	}
	src[descount] = " ";
	for (; src[srccount] != '\0'; srccount++)
	{
		dest[descount] = src[srccount];
		descount++;
	}
	return(dest);
}
