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
	a->name = name;
	a->age = age;
	a->owner = owner;
	return (a);
}
