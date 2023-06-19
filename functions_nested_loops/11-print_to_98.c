#include "main.h"
#include <stdio.h>
/**
 * print_to_98- Printo to 98
 *
 * @n: int
 *
 * Return: 0
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	} else if (n > 98)
	{
		for (; n > 98; n++)
		{
			printf("%d, ");
		}
	} else if (n == 98)
	{
		printf(98);
	}
}
