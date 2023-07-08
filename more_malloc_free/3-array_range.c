#include "main.h"
#include <stdlib.h>
/**
 * array_range- creates an array of integers
 *
 * @min: min
 * @max: max
 *
 * Return: pointer to the allocated memory of the array
 */
int *array_range(int min, int max)
{
	int c = min;
	int *s;
	int c2 = 0;

	s = malloc(sizeof(int) * (max - min) + 1);
	if (s == NULL)
	{
		return ('\0');
	}
	for (; c <= max; c++, c2++)
	{
		s[c2] = c;
	}
	return (s);
}
