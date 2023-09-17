#include "search_algos.h"
/**
* linear_search - searchs an integer in an array using linear searching
*
* @array: pointer to the first element of the array
* @size: size of the array
* @value: value to look for in the array
*
* Return: index of the value
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return(-1);

	for (; i < size && array[i] != value; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	if (!array[i] || array[i] != value)
		return(-1);

	printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	return (i);
}
