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
	int c2 = 0;
	int c3 = 0;
	int diagonal1 = 0;
	int diagonal2 = 0;

	for (; c < size;)
	{
		diagonal1 = a[c][c2] + a[c + 1][c2 + 1] - a[c][c2];
		c++;
		c2++;
	}
	for (; c3 < c;)
	{
		diagonal2 = a[c3][c] + a[c3 + 1][c - 1] - a[c3][c];
		c3++;
		c--;
	}
	printf("%d, %d", diagonal1, diagonal2);
}
