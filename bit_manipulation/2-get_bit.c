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
	int res = 0;
	unsigned int len = 0;
	unsigned long int copy = n;

	while (copy != 0)
	{
		copy = copy >> 1;
		len++;
	}
	if (index > len)
		return (-1);

	if (index > 0)
		a = a << index;

	if ((n & a) != 0)
		res = 1;

	return (res);
}
