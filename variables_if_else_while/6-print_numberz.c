#include <stdio.h>
/**
 * main- Print single digits from 0 to 9
 *
 * Return: 0
 */
int main(void)
{
	short a = 48;

	for (; a < 58;)
	{
		putchar(a++);
	}
	putchar('\n');
	return (0);
}
