#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main- makes mathematical operations
 *
 * @argc: counter of arguments
 * @argv: vector of arguments
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int res;
	int a, b;
	char *o;

	if (argc > 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[2]);
	b = atoi(argv[4]);
	o = argv[3];

	res = (*get_op_func(o))(a, b);
	return (res);
}
