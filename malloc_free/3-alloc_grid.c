#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid- return a pointer to a matrix
 *
 * @width: width
 * @heigth: heigth
 *
 * Return: int
 */
int **alloc_grid(int width, int heigth)
{
	int **s;
	int c = 0;

	if (width < 1 || heigth < 1)
	{
		return ('\0');
	}
	s = malloc(sizeof(int) * ((width * heigth) + 1));
	for (; s[c] != '\0'; c++)
	{
		s[c] = 0;
	}
	return (s);
}
