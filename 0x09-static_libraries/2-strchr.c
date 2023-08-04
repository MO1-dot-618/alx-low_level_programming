#include "main.h"
#include <stddef.h>
/**
 * _strchr - locate character
 * @s: pointer to a string
 * @c: character to find
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
