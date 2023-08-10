#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocate space for an array
 * @size: unsigned int
 * @c: char
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	else
	{
		char *arr = malloc(nmemb * size);
		unsigned int i;

		if (arr == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < nmemb * size; i++)
		{
			arr[i] = 0;
		}
		return (arr);
	}
}
