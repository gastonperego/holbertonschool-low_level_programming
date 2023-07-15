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

void print_all(const char * const format, ...);
void print_char(va_list l);
void print_int(va_list l);
void print_float(va_list l);
void print_string(va_list l);
#endif
