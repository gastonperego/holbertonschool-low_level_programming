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

	s = malloc(sizeof(int) * (max - min));
	if (s == NULL)
	{
		return ('\0');
	}
	for (; c <= max; c++)
	{
		s[c] = c;
	}
	return (s);
}
