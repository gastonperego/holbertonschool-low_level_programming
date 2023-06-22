#include "main.h"
/**
 * rev_string- revert a string
 *
 * @s: string to revert
 *
 * Return: 0
 */
void rev_string(char *s)
{
	int c = 0;
	int inicio = 0;
	char almacen;

	for (; s[c] != '\0';)
	{
		c++;
	}
	while (inicio < (c - 1))
	{
		almacen = s[inicio];
		s[inicio] = s[c];
		s[c] = almacen;
		c--, inicio++;
	}
}
