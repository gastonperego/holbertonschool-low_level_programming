#include "dog.h"
#include <stdio.h>
/**
 * print_dog- print the information about the dog
 *
 * @d: pointer to struct dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("");
	if (dog.name == NULL)
		printf("Name: (nil)");
	else
		printf("Name: %s", dog.name);
	if (dog.age == NULL)
		printf("Age: (nil)");
	else
		printf("Age: %f", dog.age);
	if (dog.owner == NULL)
		printf("Owner: (nil)");
	else
		printf("Owner: %s", dog.owner);
}
