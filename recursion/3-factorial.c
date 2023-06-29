#include "main.h"
/**
 * factorial- hace la factorial de n
 *
 * @n: numero al que se le hace la factorial
 *
 * Return: int
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n > 1)
	{
		return (n * factorial(n - 1));
	}
	return (-1);
}
