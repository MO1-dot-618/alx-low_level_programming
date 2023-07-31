#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print sum of diagonals
 * @a: matrix
 * @size: size of the matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 += a[i];
			if (i == (size - 1 - j))
				sum2 += a[i];
		}

	}
	printf("%d, %d\n", sum1, sum2);
}
