#include "3-calc.h"
#include <stdio.h>
/**
 * main- makes mathematical operations
 *
 * @a: int 1
 * @b: int 2
 * @o: operator
 * @argc: counter of arguments
 * @argv: vector of arguments
 *
 * Return: int
 */
int main(int argc, char *argv[], int a, int b, char *o)
{
	int res;

	if (argc > 3)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	o = argv[2];

	res = *get_op_fuc(o)(a, b);
	return (res);
}
