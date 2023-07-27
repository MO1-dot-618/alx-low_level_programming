#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * of integers.
 * @a: array.
 * @n: number of elements of the array.
 * Return: no return.
 */

void reverse_array(int *a, int n)
{
	int rev[100];
	int i;

	for (i = 0; i < n ; i++)
	{
		rev[i] = a[n - 1 - i];
	}
	for (i = 0; i < n; i++)
	{
		a[i] = rev[i];
	}
}
