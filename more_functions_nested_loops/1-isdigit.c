#include "main.h"
/**
 * _isadigit- Check if the input is a digit
 *
 * @c: input
 *
 * Return: 0
 */
int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
	{
		return (1);
	}
	return (0);
}
