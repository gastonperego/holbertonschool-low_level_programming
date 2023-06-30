#include "main.h"
/**
 * _islower- Prints "1" if c is lowercas, prints "0" otherwise
 *
 * @c: The character to evaluate
 *
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
