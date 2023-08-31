#include "main.h"
/**
  * set_bit - sets bit to 1
  * @index: index
  * @n: int
  * Return: set value of bit at index, otherwise -1.
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index >= (sizeof(*n) * 8))
	{
		return (-1);
	}
	i = 1 << index;
	*n = (*n | i);
	return (1);
}
