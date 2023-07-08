#include "mai.h"
#include <stdlib.h>
/**
 * _calloc- replies calloc function
 *
 * @nmemb: cantidad de elementos
 * @size: tamaño de cada elemento
 *
 * Return: a pointer to the allocated memory
 */
void _calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int c = 0;
	unsigned int a = nmemb * size;
	void *s;

	if (nmemb < 1 || size < 1)
		return (NULL);
	s = malloc(a);
	if (s == NULL)
		return (NULL);
	for (; c <= a; c++)
		s[c] = 0;
	return (s);
}
