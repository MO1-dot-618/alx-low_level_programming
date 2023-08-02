#include "main.h"
/**
 * _len - length of string
 * @s: string
 * Return: int length of string
 */
int _len(char *s)
{
	if (*s)
	{
		return (_len(s + 1) + 1);
	}
	else
	{
		return (0);
	}
}
/**
 * test - is string palindrome
 * @s: string
 * @l: length of string
 * Return: 1 if true, else 0
 */
int test(char *s, int l)
{
	if (*s == *(s + l - 1) && l >= 0)
	{
		return (test(s + 1, l - 2));
	}
	else if (*s == *(s + l - 1) && l < 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}



/**
 * is_palindrome - is string palindrome
 * @s: string
 * Return: 1 if true, else 0
 */

int is_palindrome(char *s)
{
	int l = _len(s);

	if (l == 0)
		return (1);
	else
		return (test(s, l));
}
