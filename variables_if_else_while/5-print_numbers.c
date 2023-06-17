#include <stdio.h>
/**
 *  main- Print all the numbers from 0 to 9
 *
 *  Return: always zero
 */
int main(void)
{
	char a = '0';

	for (; a < 10; a++)
	{
		printf("%d\n", a);
	}
	putchar('\n');
	return (0);
}
