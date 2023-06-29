#include "main.h"
/**
 * _sqrt_recursion- returns natural square root of a number
 *
 * @n: number to calculate the square root of
 *
 * Return: int
 */
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
	return (0);
}
int _sqrt_recursion(int n)
{
	return (aux(n, 1));
}
