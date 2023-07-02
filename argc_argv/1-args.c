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
	while (*argv[argc] != '\0')
	{
		argc++;
	}
	return (argc);
}
