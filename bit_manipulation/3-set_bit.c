#include "main.h"
/**
 * set_bit- sets the value of a bit to 1 at a given index
 *
 * @n: unsigned long int
 * @index:
 *
 * Return: 1 if success, -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max = (sizeof(unsigned long int) * 8);
	unsigned int count = 1;

	if (index > max)
		return (-1);

	count = count << index;

	*n = (*n | count);

	return (1);
}
