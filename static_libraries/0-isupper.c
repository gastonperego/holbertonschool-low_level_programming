#include "main.h"
/**
 *  _isupper- check if the input is an uppercase
 *
 *  @c: input
 *
 *  Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
