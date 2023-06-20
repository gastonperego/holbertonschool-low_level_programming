#include <stdio.h>
/**
 * main- f
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 100; n++)
	{
		if (n % 3 == 0)
		{
			putchar('F');
			putchar('i');
			putchar('z');
			putchar('z');
		}
		if (n % 5 == 0)
		{
			putchar('B');
			putchar('u');
			putchar('z');
			putchar('z');
		} else
		{
			putchar(n);
		}
	}
	putchar('\n');
	return (0);
}
