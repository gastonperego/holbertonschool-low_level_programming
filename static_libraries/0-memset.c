#include "main.h"
/**
 * _memset- fills n bytes of memory pointed by s with the constant byte b
 *
 * @s:area of memory where the vytes will be filled
 * @n: number of bytes to be filled
 * @b:constant byte
 *
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		s[count] = b;
		count++;
	}
	return (s);
}
