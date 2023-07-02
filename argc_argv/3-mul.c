#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main- multiply 2 numbers
 *
 * @argc: counter of arguments
 * @argv: string of arguments
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
