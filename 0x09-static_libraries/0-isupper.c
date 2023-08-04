#include "main.h"

/**
 *_isupper - check if a character is in upper case
 *@ch: character to check
 *Return: (1) if upper case, (0) otherwise
 **/

int _isupper(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
