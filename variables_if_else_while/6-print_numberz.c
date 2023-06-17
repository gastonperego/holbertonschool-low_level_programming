#include <stdio.h>
/**
 * main- Print single digits from 0 to 9
 *
 * Return: 0
 */
int main(void)
{
	short a = '0';

	for (; a < 10;)
	{
		putchar(a++);
	}
	return (0);
}
