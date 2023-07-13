#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_op_func- decide which one of the operations will be prfmormed
 *
 * @s:operator passed to the program
 *
 * Return: pointer to the function that corresponds to the operation needed
 */
int (*get_op_func(char *s))(int a, int b)
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

	while (i < 5 && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}
