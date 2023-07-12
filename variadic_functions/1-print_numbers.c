#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers- print numbers separated by a separator
 *
 * @separator: separator
 * @n: number of numberrs to print
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list(args);
	unsigned int count;
	int a;

	va_start(args, n);

	for (count = 0, count < n; count++)
	{
		a = va_arg(args, int);
		printf("%d%s \n", a, separator);
	}
	va_end(args);
}
