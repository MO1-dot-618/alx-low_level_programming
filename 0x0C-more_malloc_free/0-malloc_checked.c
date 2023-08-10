#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocate memo
 * @b: size to allocate
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *arr;

	arr = malloc(b);
		if (arr == NULL)
		{
			exit(98);
		}
	return (arr);
}
