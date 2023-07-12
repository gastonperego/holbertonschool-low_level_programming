#include "function_pointers.h"
/**
 * int_index- Return the first time a function returns true
 *
 * @array: array given to the function
 * @size: size of the array
 * @cmp: pointer to the function
 *
 * Return:  int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int count = 0;
	int ret;

	if (size < 1)
		return (-1);
	if (array && cmp)
	{
		for (; count < size; count++)
		{
			ret = (*cmp)(array[count]);
			if (ret != 0)
			{
				return (count);
			}
		}
	}
	return (-1);
}
