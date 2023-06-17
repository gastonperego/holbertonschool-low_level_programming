#include <stdio.h>
/**
 *  main- Should print the alphabet twice, firt lowercase and then uppercase
 *
 *  Return: always zero
 */

int main(void)
{
	char a = 'a';
	char z = 'z';
	char A = 'A';
	char Z = 'Z';

	for (; a <= z; a++)
	{
		putchar(a);
	}
	for (; A <= Z; A++)
	{
		putchar(A);
	}
	putchar('\n');
	return (0);
}
