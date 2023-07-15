#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * print_char- prints a char
 *
 * @l: va_list
 *
 * Return: always 0
 */
void print_char(va_list l)
{
	printf("%c", va_arg(l, int));
}
/**
 * print_int- prints an integer
 *
 * @l: va_list
 *
 * Return: always 0
 */
void print_int(va_list l)
{
	printf("%i", va_arg(l, int));
}
/**
 * print_float- prints a float
 *
 * @l: va_list
 *
 * Return: always 0
 */
void print_float(va_list l)
{
	printf("%f", va_arg(l, double));
}
/**
 * print_string- prints a string
 *
 * @l: va_list
 *
 * Return: always 0
 */
void print_string(va_list l)
{
	char *s = va_arg(l, char *);

	if (s == NULL)
		printf("(nil)");
	if (s != NULL)
		printf("%s", s);
}
/**
 * print_all-  print wathever it's given to it
 *
 * @format: a list of types of arguments that can be passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int c = 0;
	int c2;
	int len = strlen(format);
	print print[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL},
	};

	va_start(args, format);
	while (format[c] != '\0' && format)
	{
		c2 = 0;
		while (print[c2].a != '\0')
		{
			if (format[c] == print[c2].a)
			{
				print[c2].f(args);
				if (c < len - 1)
					printf(", ");
			}
			c2++;
		}
		c++;
	}
	va_end(args);
	printf("\n");
}
