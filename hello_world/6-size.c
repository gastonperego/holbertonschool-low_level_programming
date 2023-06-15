#include <stdio.h>
/**
 * main- Prints size of the types of variables
 *
 * Return: always 0
 */
int main()
{
	printf("Size of a char = %2d byte(s) \n", sizeof(long int));
        printf("Size of an int= %2d byte(s) \n", sizeof(float));
        printf("Size of a long int in C = %2d byte(s) \n", sizeof(double));
        printf("Size of a long long int = %2d byte(s) \n", sizeof(long double));
        printf("Size of a float = %2d byte(s) \n", sizeof(char));
  return 0;
}
