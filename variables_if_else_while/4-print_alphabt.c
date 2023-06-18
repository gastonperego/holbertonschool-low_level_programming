#include <stdio.h>
/**
 *  main- Print the alphabet except some letters
 *
 *  Return: always zero
 */
int main(void)
{
	char a = 'a';
	char z = 'z';

	for (; a <= z; a++)
	{
		if (a != 'q' && a!= 'e')
		{
			putchar(a);
		}
	}
	putchar('\n');
	return (0);
}
