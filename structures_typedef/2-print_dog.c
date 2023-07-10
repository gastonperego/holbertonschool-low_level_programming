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
		printf("\n");
	if (my_dog.name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", dog.name);
	if (my_dog.age == NULL)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", dog.age);
	if (my_dog.owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", dog.owner);
}
