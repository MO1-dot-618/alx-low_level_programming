#include "main.h"

/**
  * flip_bits - returns number of bits that need to flip
  * @m: number
  * @n: number
  * Return: number of bits that need to flip
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x, d = 1;
	unsigned int s = 0;

	x = n ^ m;
	while (d <= m || d <= n)
	{
		if (x & d)
			s++;
		d = d << 1;
	}
	return (s);
}
