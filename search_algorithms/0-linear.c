#include "search_algos.h"
/**
* 
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