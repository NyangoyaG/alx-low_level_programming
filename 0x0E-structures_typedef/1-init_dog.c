#include "dog.h"

/**
 * init_dog - initialization function
 * @d: Doggy
 * @name: name of the dog
 * @age: the of the dog
 * @owner: the owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
