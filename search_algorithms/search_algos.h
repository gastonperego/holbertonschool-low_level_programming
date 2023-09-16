#ifndef HEADERFILE
#define HEADERFILE
#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, int high, int low);
int recursive_binary(int *array, int high, int low, int value);
#endif