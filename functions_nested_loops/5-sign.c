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
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
		_putchar('0');
		return (0);
}
