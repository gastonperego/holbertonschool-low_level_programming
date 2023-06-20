#include <stdio.h>
/**
 * main- print 0123456789abcde
 *
 * Return: 0;
 */
int main(void)
{
	char a, b;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
	}
	for (b = 97; b < 103; b++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
