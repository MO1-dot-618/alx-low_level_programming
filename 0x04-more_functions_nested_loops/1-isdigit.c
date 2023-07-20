#include "main.h"
/**
*  _isdigit - check if character is a digit
* @c: number to check
* Return: 1 if a number between 0 and 9, 0 otherwise
**/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
