#include "main.h"
/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++);
	/*Find the end of str1*/

	for (j = 0; src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
		/* Append str2 to the end of str1*/
	}
	dest[i] = '\0';
	/* Add null terminator to complete the concatenated string*/
	return (dest);
}
