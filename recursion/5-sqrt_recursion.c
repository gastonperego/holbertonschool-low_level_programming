#include "main.h"
/**
 * aux- calculate he squaere root of n
 *
 * @n: ja
 * @m: punto de inicio
 *
 * Return: int
 */
int aux(int n, int m)
{
	if (m * m == n)
	{
		return (m);
	}
	else if (m <= n)
	{
		aux(n, m + 1);
	}
	return (-1);
}
/**
 * _sqrt_recursion- print
 *
 * @n: number
 *
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (aux(n, 1));
}
