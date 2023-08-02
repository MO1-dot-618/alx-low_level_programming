#include "main.h"
/**
 * formula - for every x check if it is a sqrt
 * @x: number to verify
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */

int formula(int x, int n)
{
	if ((x * x) < n)
		formula(x + 1, n);
	else if ((x * x) == n)
	{
		return (x);
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number n
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */

int _sqrt_recursion(int n)
{
	return (formula(1, n));
}
