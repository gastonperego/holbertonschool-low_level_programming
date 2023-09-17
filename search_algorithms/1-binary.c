#include "search_algos.h"
/**
* binary_search-searchs an integer in an array of integers using binary search
*
* @array: pointer to the first element of the array
* @size: size of the array
* @value: value to look for in the array
*
* Return: index where the value was found
*/
int binary_search(int *array, size_t size, int value)
{
	int low = 0, high = size - 1, mid;

	if (!array)
		return (-1);

	while (low <= high)
	{
		print_array(array, high, low);
		mid = low + (high - low) / 2;

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}

	return (-1);
}


/**
* print_array - prints the array between 2 indexes
*
* @array: pointer to the first element of the array
* @high: highest index of the array to print
* @low: lowest index of the array to print
*
* Return: void
*/
void print_array(int *array, int high, int low)
{
	printf("Searching in array: ");
	while (low <= high)
	{
		printf("%d", array[low]);
		if (low != high)
			printf(", ");
		low++;
	}
	printf("\n");
}
