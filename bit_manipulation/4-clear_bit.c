#include "main.h"
/**
 * clear_bit- sets the value of a bit to 0 at a given index
 *
 * @n: unsigned long int
 * @index: index
 *
 * Return: 1 if succes, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max = (sizeof(unsigned long int) * 8);
	unsigned int count = 1;

	if (index > max)
		return (-1);

	count = ~(count << index);

	*n = (*n & count);

	return (1);
}
