#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings- prints strings separated by a separator
 *
 * @n: number of strings to be printed
 * @separator: separator
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	va_list args;
	char *a;

	va_start(args, n);

	for (count = 0; count < n; count++)
	{
		a = va_arg(args, char *);
		if (separator == NULL)
		{
			separator = "";
		}
		if (count < n - 1)
			printf("%s%s", a, separator);
		else
			printf("%s", a);
		if (a == NULL)
		{
			printf("(nil)%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
