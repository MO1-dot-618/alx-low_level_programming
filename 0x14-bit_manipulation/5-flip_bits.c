#include "main.h"

/**
  * clear_bit - returns number of bits that need to flip
  * @m: number
  * @n: number
  * Return: number of bits that need to flip
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x, i = 0, d = 0;
	unsigned int s = 0;

	x = n ^ m;
	while (d <= m || d <= n)
	{
		d = 1 << i;
		if (!(x ^ d))
			s++;
		i++;
	}
	return (s);
}
