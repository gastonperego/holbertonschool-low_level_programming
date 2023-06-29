#include "main.h"
/**
 * is_prime_number- retorna 1 si el numero es primo y retorna 0 si no
 *
 * @n: el numero
 *
 * Return: 0
 */
int is_prime_number(int n)
{
	if (n % n == 0 && n > 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
