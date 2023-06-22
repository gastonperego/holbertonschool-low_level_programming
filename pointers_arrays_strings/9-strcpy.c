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
	int inter;

	for (count = 0; src[count] != '\0';)
	{
		inter = src[count];
		count++;
	}
	_putchar(inter);
}
