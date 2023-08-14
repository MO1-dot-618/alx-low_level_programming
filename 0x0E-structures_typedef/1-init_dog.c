#include "dog.h"

/**
 * init_dog - Initializes a dog
 * @d: The dog to be initialized - type dog
 * @name: The name of the dog - string
 * @age: The age of the dog - int
 * @owner: The owner of the dog - string
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	int i;

	if (d)
	{
		for (i = 0; name[i] != '\0'; i++)
			d->name[i] = name[i];
		d->name[i] = '\0';
		d->age = age;
		for (i = 0; owner[i] != '\0'; i++)
			d->owner[i] = owner[i];
		d->owner[i] = '\0';
	}
}
