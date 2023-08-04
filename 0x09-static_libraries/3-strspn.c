#include "main.h"
/**
 * _strspn - locate character
 * @s: pointer to a string
 * @accept: pointer to characters to find
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, n = 0;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}
			if (accept[i + 1] == '\0')
			{
				return (n);
			}
		}
		s++;
	}
	return (n);
}
