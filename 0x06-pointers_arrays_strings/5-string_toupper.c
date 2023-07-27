#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @str: input string.
 * Return: the pointer to dest.
 */
char *string_toupper(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
		{
			*str -= 32;
		}
		str++;
	}
	return (str);
}
