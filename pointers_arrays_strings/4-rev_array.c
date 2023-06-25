#include "main.h"
/**
 * reverse_array- revert an array
 *
 * @a:array
 * @n: number of elemnts of the array
 *
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int inicio = 0;
	int final = 0;
	int z;

	while (a[final] != '\0')
	{
		final++;
	}
	final--
	for (; inicio < n;)
	{
		z = a[inicio];
		a[inicio] = a[final];
		a[final] = z;
		inicio++;
		final--;
	}
}
