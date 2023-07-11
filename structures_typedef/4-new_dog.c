#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strcpy-Write a function that copies the string pointed to by src,
 *  including the terminating null byte (\0), to the buffer pointed to by dest.
 *
 *  @dest: idk
 *  @src: idk either
 *
 *  Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int count;

	for (count = 0; src[count] != '\0'; count++)
	{
		dest[count] = src[count];

	}
	dest[count] = '\0';
	return (dest);
}
/**
 * _strlen- length of a string
 *
 * @b: string
 *
 * Return: int
 */
int _strlen(char *b)
{
	int count = 0;

	if (!b)
	{
		return ('\0');
	}

	while (b[count] != '\0')
		count++;
	return (count + 1);
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
	char *namecp;
	char *ownercp;


	a = malloc(sizeof(dog_t));
	if (a == NULL)
	{
		free(a);
		return ('\0');
	}
	if (name != NULL)
	{
		namecp = malloc(_strlen(name));
		if (!namecp)
		{
			free(a);
			return (NULL);
		}
		_strcpy(namecp, name);
	}
	if (owner != NULL)
	{
		ownercp = malloc(_strlen(owner));
		if (!ownercp)
		{
			free(a);
			return ('\0');
		}
		_strcpy(ownercp, owner);
	}
	a->name = namecp;
	a->age = age;
	a->owner = ownercp;
	return (a);
}
