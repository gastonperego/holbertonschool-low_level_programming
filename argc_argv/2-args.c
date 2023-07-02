#include <stdio.h>
#include "main.h"
/**
 * main- print all the arguments recieved
 *
 * @argc: count the arguments
 * @argv: vector of arguments
 *
 * Return: int
 */
int main(int argc, char **argv)
{
	argc = 0;

	for (; argv[argc] != '\0'; argc++)
	{
		pritnf("%s\n", argv[argc]);
		return (0);
	}
}
