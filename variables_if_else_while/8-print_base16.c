#include <stdio.h>
/**
 * main- print 0123456789abcde
 *
 * Return: 0;
 */
int main(void)
{
	char a, b;

	for (a = '0'; a < 10; a++)
	{
		putchar(a);
	}
	for (b = 'a'; b < 'g'; b++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
