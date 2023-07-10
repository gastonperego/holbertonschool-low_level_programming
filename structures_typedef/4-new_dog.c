#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup- return a pointer to a copy of a string
 *
 * @str: string to copy
 *
 * Return: puntero
 */
char *_strdup(char *str)
{
	char *s;
	int count = 0;
	int count2 = 0;

	if (str == NULL)
	{
		return ('\0');
	}
	for (; str[count] != '\0';)
	{
		count++;
	}
	s = malloc(sizeof(char) * (count + 1));
	if (s == NULL || s == 0)
	{
		return ('\0');
	}
	for (; count2 <= count; count2++)
	{
		s[count2] = str[count2];
	}
	return (s);
}
/**
 * new_dog - new dog
 *
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: pointer to dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *a;

	a = malloc(sizeof(dog_t));
	if (a == NULL)
		return (NULL);
	a->name = _strdup(name);
	a->age = *age;
	a->owner = _strdup(owner);
	return (a);
}
