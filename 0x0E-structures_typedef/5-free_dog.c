#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free dogs
 * @d: doggo pointer
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
