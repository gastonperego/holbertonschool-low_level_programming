#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked- allocate memory using malloc
 *
 * @b: amount of memory
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	int *s;

	s = malloc(b);
	return (s);
}
