#include "main.h"
/**
 * _sqrt_recursion- returns natural square root of a number
 *
 * @n: numbero ro calculate the square root of
 *
 * Return: int
 */
int aux (int n, int m)
{
	if (m * m == n)
	{
		return (m);
	}
	else if (m < n)
	{
		aux(n, m + 1);
	}
	return (-1);
}

int _sqrt_recursion(int n)
{
	aux(n, 1);
	return (aux);
}
