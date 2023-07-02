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
int main(int argc, char *argv[])
{
	int count = 0;

	while (**argv[count] != '\0')
	{
		count++;
	}
	printf("%d\n", argc);
	return (0);
}
