#include <stdio.h>
/**
 *  main- gggds
 *
 *  Return: 0
 */
int main(void)
{
	short a = '0';

	for (; a < 10; a++)
	{
		putchar(a);
		putchar(" ");
		putchar(",");
	}
	putchar('\n');
	return (0);
}
