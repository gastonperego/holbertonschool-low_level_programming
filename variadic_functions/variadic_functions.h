#ifndef HEADERFILE
#define HEADERFILE
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
typedef struct a
{
	char a;
	void (*f)(va_list l);
} print;

int print_char(va_list l);
int print_int(va_list l);
int print_float(va_list l);
int print_string(va_list l);
#endif
