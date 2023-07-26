#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string.
 * @s2: second string.
 * Return: 0 if s1 and s2 are equals,
 * another number if not.
 */
int _strcmp(char *s1, char *s2)
{
	int l1 = 0, l2 = 0, i;

	while (l1 >= 0)
	{
		if (s1[l1] == '\0')
			break;
		l1++;
	}
	while (l2 >= 0)
	{
		if (s2[l2] == '\0')
			break;
		l2++;
	}
	for (i = 0; i < l1 || i < l2; i++)
	{
		if (s1[i] - s2[i] != 0)
			return (s1[i] - s2[i]);
	}
	return (0);
}
