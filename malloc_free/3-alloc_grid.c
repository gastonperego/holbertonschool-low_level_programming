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
	int c2;

	if (width < 1 || heigth < 1)
	{
		return ('\0');
	}
	s = malloc(sizeof(int) * ((width * heigth) + 1));
	if (s == NULL)
	{
		free(s);
		return ('\0');
	}
	for (; c < width; c++)
	{
		for (c2 = 0; c2 < heigth; c2++)
		{
			s[c][c2] = 0;
		}
	}
	return (s);
}
