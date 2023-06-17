#include <stdio.h>
/**
 *  main- Print all the numbers from 0 to 9
 *
 *  Return: always zero
 */
int main(void)
{
	char a = 0;
	char z = 10;

	for (; a < z; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
