#include <stdio.h>
/**
 * whats_my_name- prints the name of the function
 *
 * @argv: string
 * @argc: number of elements of the string
 *
 * Return: 0
 */
int whats_my_name(int argc, char *argv[])
{
	printf("%s\n", argv[argc - argc]);
	return (0);
}
