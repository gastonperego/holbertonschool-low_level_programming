#include "main.h"
/**
 * _strcpy-Write a function that copies the string pointed to by src,
 *  including the terminating null byte (\0), to the buffer pointed to by dest.
 *
 *  @dest: idk
 *  @src: idk either
 *
 *  Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int count;
	char ** pass = &dest;

	for (count = 0; src[count] != '\0'; count++)
	{
		*pass = src[count];
	}
	return (dest);
}
