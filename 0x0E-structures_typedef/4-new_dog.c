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
	dog_t d;
	dog_t *p = &d;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	d.name = malloc(_strlen(name));
	d.owner = malloc(_strlen(owner));
	d.age = age;
	_strcpy(d.name, name);
	_strcpy(d.owner, owner);
	return (p);
}
