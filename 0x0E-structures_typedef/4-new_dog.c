#include "dog.h"
#include <stdio.h>
/**
 * _strlen - returns the length of a string.
 * @s: input string.
 * Return: length of a string.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte, to the
 * buffer pointed to by dest.
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
/**
 * new_dog - create new dog
 * @name: The name of the dog - string
 * @age: The age of the dog - float
 * @owner: The owner of the dog - string
 * Return: pointer to dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	char *c_name, *c_owner;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
	{
		return (NULL);
	}
	c_name = malloc(_strlen(name));
	if (c_name == NULL)
	{
		free(p);
		return (NULL);
	}
	c_owner = malloc(_strlen(owner));
	if (c_owner == NULL)
	{
		free(c_name);
		free(p);
		return (NULL);
	}

	_strcpy(c_name, name);
	_strcpy(c_owner, owner);

	p->name = c_name;
	p->age = age;
	p->owner = c_owner;
	return (p);
}
