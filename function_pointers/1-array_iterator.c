#include "function_pointers.h"
/**
 * array_iterator- gives easch element of an array to a pointer to a funcion
 *
 * @array: array of integers
 * @size: size of the array
 * @action: pointer to the function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int count = 0;

	if (action)
	{
		for (; count < size; count++)
		{
			(*action)(array[count]);
		}
	}
}
