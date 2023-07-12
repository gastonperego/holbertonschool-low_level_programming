#include "calc.h"
#include <stdio.h>
/**
 * get_op_func- decide which one of the operations will be prfmormed
 *
 * @s:operator passed to the program
 *
 * Return: pointer to the function that corresponds to the operation needed
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != s)
	{
		i++;
	}
	if (i > 4)
	{
		exit(99);
	}
	return (ops[i].f);
}
