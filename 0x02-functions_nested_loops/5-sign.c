#include "main.h"
/**
 * print_sign - Shows 1 if the input is a
 * postive number, 0 if zero, -1 if negative
 *
 * @n: The character in ASCII code
 *
 * Return: 1 positive. 0 for zero. -1 for negative
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
