#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- print a random number and say if its positive, negative or zero
 *
 * Return: always zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive", n);
	} else if (n > 0)
	{
		printf("%d is negative", n);
	} else
		printf("%d is zero", n);
	return (0);
}
