#include <stdio.h>
/**
 *  main- gggds
 *
 *  Return: 0
 */
int main(void)
{
	short a = 48;

	for (; a < 58; a++)
	{
		putchar(a);
		if (a != 57) 
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
