#include "main.h"

/**
  * clear_bit - sets bit to 0
  * @index: index
  * @n: number
  * Return: set value of bit at index, otherwise -1.
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index >= (sizeof(n) * 8))
		return (-1);
	i = 1 << index;
	if (*n & i)
		*n ^= i;
	return (1);
}
