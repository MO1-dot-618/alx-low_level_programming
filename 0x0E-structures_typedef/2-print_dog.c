#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - print a dog
 * @d: type dog
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: ");
		if (d->name != NULL)
		{
			printf("%s\n", d->name);
		}
		else
		{
			printf("(nil)\n");
		}
		printf("Age: %.6f\n", d->age);
		printf("Owner: ");
		if (d->owner != NULL)
		{
			printf("%s\n", d->owner);
		}
		else
		{
			printf("(nil)\n");
		}
	}
}
