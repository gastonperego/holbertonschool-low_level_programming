#include "main.h"
/**
 * _memcpy- copies n bytes from memory area src to memory area dest
 *
 * @n: number of bytes to be copied
 * @src: source memory (the source the bytes will be copied from)
 * @dest: destiny memory (the memory where the bytes will be copied)
 *
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count = 0;

	for (; count < n; count++)
	{
		dest[count] = src[count];
	}
	return (dest);
}
