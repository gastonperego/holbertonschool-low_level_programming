#include "main.h"
/**
 *  print_sign- Imprimer el signo del input
 *
 *  @n: Es el input al que se le va a descifrar el signo
 *
 *  Return: 0
 */
int print_sign(int n)
{
	int a;
	
	if (n > '0')
	{
		_putchar(43);
		a = '1';
	}
	if (n > '0')
	{
		_putchar(45);
		a = -1;
	} if (n == '0')
	{
		_putchar('0');
		a = '0';
	}
	return (a);
}
