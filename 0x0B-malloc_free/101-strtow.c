#include "main.h"
#include <stdlib.h>
/**
 * strtow - split string to words
 * @str: strings
 * Return: pointer of pointer
 */
char **strtow(char *str)
{
	int i, j = 0, z, size = 0, count = 1;
	char **s;

	if (str[0] == '\0' || str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '	')
			count++;
	}
	s = (char **)malloc(sizeof(char *) * (count + 1));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i < count; i++)
	{
		for (j = j + 1; str[j] != ' '; j++)
			size++;
		s[i] = (char *)malloc(sizeof(char) * (size + 1));
		if (s[i] == NULL)
		{
			for (z = 0; z < i; z++)
				free(s[z]);
			free(s);
			return (NULL);
		}
		for (z = 0; z < size; z++)
		{
			s[i][z] = str[z + j - size];
		}
		s[i][size] = '\0';
		size = 0;
	}
	s[count] = NULL;
	return (s);
}
