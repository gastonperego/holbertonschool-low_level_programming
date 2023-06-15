#include <stdio.h>
/**
 * main- Prints size of the types of variables
 *
 * Return: always 0
 */
int main()
{
	printf("Size of Int Data Types in C = %2d  byte(s) \n", sizeof(short int));
	printf("Size of Long Int Data Types in C = %2d byte(s) \n", sizeof(long int));
        printf("Size of Float Data Types in C = %2d byte(s) \n", sizeof(float));
        printf("Size of Double Data Types in C = %2d byte(s) \n", sizeof(double));
        printf("Size of Long Double Data Types in C = %2d byte(s) \n", sizeof(long double));
        printf("Size of Char Data Types in C = %2d byte(s) \n", sizeof(char));
  return 0;
}
