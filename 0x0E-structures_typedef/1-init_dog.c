#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a dog
 * @d: The dog to be initialized - type dog
 * @name: The name of the dog - string
 * @age: The age of the dog - int
 * @owner: The owner of the dog - string
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	d->age = age;
	(*d).owner = owner;
}
