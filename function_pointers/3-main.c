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

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	o = argv[2];

	if (get_op_func == '\0' || argv[2] == '\0')
	{
		printf("Error\n");
		return (99);
	}
	if ((argv[2] == '/' || argv[2] == '%') && argv[3] == 0)
	{
		printf("Error\n");
		return (100);
	}

	res = (*get_op_func(o))(a, b);
	printf("%d\n", res);
	return (res);
}
