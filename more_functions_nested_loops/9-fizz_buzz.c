#include <stdio.h>
/**
 * main- f
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0)
		{
			printf("Fizz");
		}
		if (n % 5 == 0)
		{
			printf("Buzz");
		} else
		{
			printf("%d", n);
		}
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
