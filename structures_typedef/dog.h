#ifndef HEADERFILE
#define HEADERFILE
/**
 * struct dog- ...
 *
 * @name: name of the dog
 * @age: age of he dog
 * @owner: owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
