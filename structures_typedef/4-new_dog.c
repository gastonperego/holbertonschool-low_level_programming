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
int _strlen(*char b)
{
	int count = 0;

	if (b)
	{
		while (b[count] != '\0')
		{
			count++;
		}
	}
	return (count);
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
	if (name)
	{
		namecp = malloc(_strlen(name));
	}
	if (namecp == NULL)
	{
		free(namecp);
		return (NULL);
	}
	if (owner)
	{
		ownercp = malloc(strlen(owner));
	}
	if (ownercp == NULL)
	{
		free(ownercp);
		return ('\0');
	}
	_strcpy(namecp, name);
	_strcpy(ownercp, owner);
	a->name = name;
	a->age = age;
	a->owner = owner;
	return (a);
}
