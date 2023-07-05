#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array- creates an array of chars and initializes it with a char
 *
 * @size: size of the array
 * @c: char to initialize the array
 *
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int count;

	s = malloc(sizeof(int) * size);
	if  (s == NULL || size == 0)
	{
		return ('\0');
	}
		for (count = 0; count < size; count++)
		{
			s[count] = c;
		}
	return (s);
}
