#include "dog.h"

/**
 * new_dog - create new dog
 * @name: The name of the dog - string
 * @age: The age of the dog - float
 * @owner: The owner of the dog - string
 * Return: pointer to dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	dog_t d;
	dog_t *p = &d;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; name[i] != '\0'; i++)
			d.name[i] = name[i];
		d.name[i] = '\0';
		d.age = age;
		for (i = 0; owner[i] != '\0'; i++)
			d.owner[i] = owner[i];
		d.owner[i] = '\0';
	}
	return (p);
}
