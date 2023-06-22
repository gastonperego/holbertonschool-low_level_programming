#include "main.h"
#include <stdio.h>
/**
 * print_array- printear un array
 *
 * @a: puntero
 * @n: integer
 *
 * Return: 0
 */
void print_array(int *a, int n)
{
	int loop;

	for (loop = 0; loop <= n; loop++)
	{
		if (loop != n - 1)
		{
			printf("%d, ", a[loop]);
		}
		else
		{
			printf("%d", a[loop]);
	}
}
