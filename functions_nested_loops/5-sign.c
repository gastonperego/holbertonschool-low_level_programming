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
		a = '1';
		_putchar(43);
	} else if (n > '0')
	{
		a = -1;
		_putchar('-');
	} else if (n == '0')
	{
		a = '0';
		_putchar('0');
	}
	return (a);
}
