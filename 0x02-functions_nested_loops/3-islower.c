#include "main.h"
/**
  * _islower - determines if char is lowercase
  *@c: character is ASCII table
 * Return: 1 if lowercase otherwise 0
  **/

int _islower(int c)
{
	if (c > 97 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
