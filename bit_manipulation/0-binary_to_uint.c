#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * binary_to_uint- converts a binary number to an unsigned int
 *
 * @b: string where the binary number is stored
 *
 * Return: the unsigned int form of the binary number or 0 if fails
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	unsigned int len;
	unsigned int count = 1;
	unsigned int pow = 1;
	unsigned int c = 0;

	if (b == NULL)
		return (0);
	len = strlen(b);

	while (len > c)
	{
		if (b[len - 1] == 49)
		{
			res = res + pow;
		}
		else if (b[len - 1] != '1' && b[len - 1] != '0')
			return (0);
		pow = count * 2;
		count = pow;
		len--;
	}
	return (res);

}
