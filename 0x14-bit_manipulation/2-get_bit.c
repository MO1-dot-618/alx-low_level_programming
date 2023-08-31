#include "main.h"
/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The bit.
 * @index: The index to get the value at - indices start at 0.
 * Return: If an error occurs - -1.
 *         Otherwise - The value of bit at index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (n == 0 || index >= (sizeof(n) * 8))
	{
		return (-1);
	}
	if (index == 0)
	{
		return (n & 1);
	}
	else
	{
		return (get_bit(n >> 1, index - 1));
	}
}
