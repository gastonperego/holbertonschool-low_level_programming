#include <stdio.h>
/**
 * whats_my_name- prints the name of the function
 *
 * @argc: numero de caractres de la string
 * @argv: string
 *
 * Return: 0
 */
int whats_my_name(int argc, char *argv)
{
	putchar(argv[argc]);
	return (0);
}
