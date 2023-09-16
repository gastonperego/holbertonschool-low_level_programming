#include "search_algos.h"
/**
*
*/
int binary_search(int *array, size_t size, int value)
{
	int low = 0, high = size - 1, ret;

	if (!array)
		return (-1);

	ret = recursive_binary(array, high, low, value);

	return (ret);
}

int recursive_binary(int *array, int high, int low, int value)
{
	int mid;

	while (low < high)
	{
		print_array(array, high, low);
		mid = (low + high) / 2;

		if (array[mid] == value)
			return(mid);
		if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid;
		}
	}

	return (-1);
}

void print_array(int *array, int high, int low)
{
	printf("Searching in the array: ");
	while (low < high)
	{
		printf("%d", array[low]);
		if (low != high - 1)
			printf(", ");
		low++;
	}
	printf("\n");
}
