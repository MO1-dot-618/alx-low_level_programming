#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocate memory
 * @ptr: pointer
 * @old_size: int
 * @new_size: int
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	/*
	* unsigned int i, cp = 0;
	*/

	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
		{
			return (NULL);
		}
		return (p);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}

	p = malloc(new_size);
	if (p == NULL)
	{
		return (NULL);
	}
	/*
	* cp = new_size > old_size ? old_size : new_size;
	* for (i = 0; i < cp ; i++)
		* p[i] = ptr[i];
	 */

	free(ptr);
	return (p);
}
