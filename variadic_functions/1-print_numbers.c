#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
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

	if (separator == NULL)
	{
		for (count = 0; count < n; count++)
		{
			a = va_arg(args, int);
			printf("%d", a);
		}
	}
	else
	{
		for (count = 0; count < n; count++)
		{
			a = va_arg(args, int);
			printf("%d%s", a, separator);
		}
	}
	printf("\n");
	va_end(args);
}
