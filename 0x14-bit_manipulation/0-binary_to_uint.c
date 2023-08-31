#include "main.h"
#include <stddef.h>

/**
 * Pow - power
 * @a: int
 * @b: int
 * Return: power
 */
int Pow(int a, int b)
{
	int power = 1, i;

	for (i = 1; i <= b; ++i)
	{
		power = power * a;
	}
	return (power);
}

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: A pointer to a string of 0 and 1 chars
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, dec, j;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		if (b[i] != 48 && b[i] != 49)
		{
			return (0);
		}
		i++;
	}
	for (j = 0; j < i; j++)
	{
		dec += (b[j] - 48) * Pow(2, (i - j - 1));
	}
	return (dec);
}
