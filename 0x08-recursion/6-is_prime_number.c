#include "main.h"
/**
 * formula - is n divisible by x
 * @x: int
 * @n: integer to verify
 * Return: natural square root or -1
 */

int formula(int x, int n)
{
	if (n % x)
	{
		return (formula(x + 1, n));
	}
	else if (n == x)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * is_prime_number - is number prime
 * @n: integer
 * Return: 1 if prime, else 0
 */
int is_prime_number(int n)
{
	return (formula(2, n));
}
