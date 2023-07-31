#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - search character in string
 * @s: pointer to a string
 * @accept: pointer to characters to find
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
