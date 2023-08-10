#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenate two strings
 * @s1: string
 * @s2: string
 * @n: int
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, c1 = 0, c2 = 0;
	char *arr;

	for (i = 0; s1 != NULL && s1[i] != '\0'; i++)
		c1++;
	for (i = 0; s2 != NULL && s2[i] != '\0'; i++)
		c2++;
	if (n < c2)
		c2 = n;
	arr = malloc(sizeof(char) * (c1 + c2 + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < c1; i++)
	{
		arr[i] = s1[i];
	}
	for (i = 0; i < c2; i++)
	{
		arr[i + c1] = s2[i];
	}
	arr[c1 + c2] = '\0';
	return (arr);
}
