#include <stdio.h>
/**
 * whats_my_name- prints the name of the function
 *
 * @argc: numero de caractres de la string
 * @argv: string
 *
 * Return: 0
 */
int whats_my_name(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
