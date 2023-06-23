#include "main.h"
/**
 * _atoi- convert an array into an integer
 *
 * @s: array
 *
 * Return: 0
 */
int _atoi(char *s)
{
	int c = 0;
	int a = 1;
	int num = 0;

	while (s[c] != '\0')
	{
		if (s[c] == '-')
		{
			a = a * -1;
		}
		if (s[c] >= 48 && s[c] <= 57)
		{
			if (a < 0)
			{
				num = (num - (s[c] - 48));
			}
			else 
			{
			num = num + (s[c] - 48);
			}
			if (s[c + 1] >= 48 && s[c + 1] <= 57)
			{
				num = (num * 10);
			}
		}
		if (((s[c] >= 48 && s[c] <= 57) && (s[c + 1] < 48 || s[c + 1] > 57))
			|| s[c + 1] == '\0')
		{
			return (num * a);
		}
		c++;
	}
	return (0);
}
