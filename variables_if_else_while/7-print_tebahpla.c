#include <stdio.h>
/**
 *  main- print the alphabet in reverse
 *
 *  Return: 0
 */

int main(void)
{
	char z = 'z';
	char a = 'a';

	for (; z > a; z--)
	{
		putchar(z);
	}
	return (0);
}
