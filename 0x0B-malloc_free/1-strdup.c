#include "main.h"
#include <stdlib.h>
/**
 * _strdup - allocate space for string
 * @str: string
 * Return: pointer
 */
char *_strdup(char *str)
{
	unsigned int i, c = 0;
	char *arr;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
		c++;
	arr = malloc(sizeof(char) * c);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < c; i++)
	{
		arr[i] = str[i];
	}
	return (arr);
}
