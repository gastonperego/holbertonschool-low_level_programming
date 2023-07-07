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
	int c;
	int c2;

	if (width < 1 || heigth < 1)
	{
		return ('\0');
	}
	s = malloc(sizeof(int *) * heigth);
	if (!s)
	{
		return ('\0');
	}
	for (c = 0; c < heigth; c++)
	{
		s[c] = malloc(sizeof(int) * width);
		if (s[c] == NULL)
		{
			for (; c >= 0; c--)
			{
				free(s[c]);
			}
			free(s);
			return ('\0');
		}
	}
	for (c = 0; c < heigth; c++)
	{
		for (c2 = 0; c2 < width; c2++)
			s[c][c2] = 0;
	}
	return (s);
}
