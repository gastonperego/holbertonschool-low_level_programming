#include "main.h"
#include <stdio.h>
/**
 * print_diagsums- prints the sum of the two diagonals of a square matrix of
 * integers.
 *
 * @a: ds
 * @size: sd
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int c = 0;
	int diagonal1 = 0;
	int diagonal2 = 0;

	for (; c < size;)
	{
		diagonal1 += a[c * size + c];
		c++;
	}
	c = 0;
	for (; c < size;)
	{
		diagonal2 += a[c * size + (size - 1 - c)];
		c++;
	}
	printf("%d, %d", diagonal1, diagonal2);
}
