#include "main.h"
/**
 * _strncpy- copie some characters of a string
 *
 * @dest: destiny string
 * @src: source string
 * @n: number of characters to be copied
 *
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int bcount = 0;

	for (; bcount < n && src[bcount] != '\0'; bcount++)
	{
		dest[bcount] = src[bcount];
	}
	for (; bcount < n; bcount++)
	{
		dest[bcount] = '\0';
	}
	return (dest);
}
