#include <stdio.h>
/**
 * main- Display the alphabet in lowercase, followed by a new line
 *
 * Return: always zero
 */
int main(void)
{
	char a = 'a';

	for (; a <= 'z';)
	{
		putchar(a++);
	}
	putchar('\n');
	return (0);
}
