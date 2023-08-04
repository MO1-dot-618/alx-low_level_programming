#include "main.h"
/**
 * _memcpy - copy string to another string
 * @dest: pointer to a string
 * @src: pointer to a string
 * @n: number of characters
 * Return: pointer to string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
