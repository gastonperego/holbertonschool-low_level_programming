#include "main.h"
#include <stdio.h>
/**
 * main- print then umber of arguments given
 *
 * @argc: count the arguments
 * @argv: vector
 *
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
