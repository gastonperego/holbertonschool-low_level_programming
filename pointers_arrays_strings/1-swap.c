#include "main.h"
/**
 * swap_int- swap the value of two integers
 *
 * @a: pointer to integer
 * @b: another pointer to an integer
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	(*a = *b) && (*b = *a);
}
