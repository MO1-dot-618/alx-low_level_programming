#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments
 * @av: array of strings
 * @ac: int number of arrays
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	int i, j, size = 0, count = 0;
	char *s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			size++;
		}
		size++;
	}
	s = malloc(sizeof(char) * (size + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			*(s + count) = av[i][j];
			count++;
		}
		*(s + count) = '\n';
		count++;
	}
	return (s);
}
