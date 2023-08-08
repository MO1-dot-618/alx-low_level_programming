#include "main.h"
#include <stdlib.h>
/**
 * create_array - allocate space for an array
 * @size: unsigned int
 * @c: char
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		char arr[size] = {c};

		return (arr);
	}
}
