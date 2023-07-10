#include "main.h"
/**
 * init_dog- init dog
 *
 * @d: name of the struct
 * @name: nombre del perro
 * @owner: dueño del perro
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
