#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_them_all- sums all its parameters except the first one
 *
 * @n: first parameter(it is the number of parameters to sum)
 *
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int s = 0;
	int count;

	va_start(args, n);

	for (count = 0; count < n; count++)
	{
		s += va_arg(args, int);
	}
	va_end(args);
	return (s);
}
