#include "main.h"
#include <stddef.h>
/**
 * _strstr - search string in string
 * @s: pointer to a string
 * @needle: pointer to string to find
 * Return: pointer
 */
char *_strstr(char *s, char *needle)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (*(s + i) != needle[i])
			{
				break;
			}
			if (needle[i + 1] == '\0')
			{
				return (s);
			}
		}
		s++;

	}
	return (NULL);
}
