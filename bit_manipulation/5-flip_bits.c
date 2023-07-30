#include"main.h"
/**
 * flip_bits- return the number of bits you would need to flip to change from
 * one number to another
 *
 * @n: number
 * @m: new number
 *
 * Return: number of bits that would need to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a = n ^ m;
	unsigned long int b = 0;

	while (a > 0)
	{
		b += (a & 1);
		b = b >> 1;
	}

	return (b);
}
