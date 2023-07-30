#include "main.h"
/**
 * get_bit- returns the value of a bit at a given index
 *
 * @n: unsigned int
 * @index: index
 *
 * Return: the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int a = 1;
	int bit = 0;
	int max = sizeof(unsigned long int * 8);

	if (index < max)
		a = a << index;
	else
		return (-1);

	if ((n & a) != 0)
		bit = 1;

	return (bit);
}
