#include "main.h"
/**
 * _strncat-concatenates 2 strings
 *
 * @dest: detiny string
 * @src: source string
 * @n: int
 *
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int descount = 0;
	int srccount = 0;

	while (dest[descount] != '\0')
	{
		descount++;
	}
	for (; srccount < n && src[srccount] != '\0' ; srccount++)
	{
		dest[descount] = src[srccount];
		descount++;
	}
	return (dest);
}
