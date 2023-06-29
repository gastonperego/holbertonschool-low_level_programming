#include "main.h"
/**
 * _pow_recursion- eleva el numero x a la y
 *
 * @x: numero a elevar
 * @y: exponente
 *
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	int e = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (1);
}
