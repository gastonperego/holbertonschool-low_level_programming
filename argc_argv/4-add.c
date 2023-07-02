#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main- adds all the arguments given
 *
 * @argc: count the arguments
 * @argv: the string
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int count;
	int count2;
	char *aux;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (count = 1; count < argc; count++)
	{
		aux = argv[count];
		for (count2 = 0; aux[count2] != '\0'; count2++)
		{
			if (aux[count2] < 48 || aux[count2] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[count]);
	}
	printf("%d\n", sum);
	return (0);
}
