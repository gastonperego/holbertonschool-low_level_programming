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
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
