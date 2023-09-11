#include "dog.h"

/**
 * init_dog - initializes a dog
 * @d: init dog
 * @name: the dog name
 * @age: age
 * @owner: dog owner's name
 * Retuen: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
