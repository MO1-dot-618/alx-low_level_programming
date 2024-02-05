#include "search_algos.h"

/**
 * binary_search - search value binary style
 * @array: input
 * @size: size of array
 * @value: value
 * Return: index or -1
 */

int binary_search(int *array, size_t size, int value)
{
	int start = 0, end = (int) size - 1;
	int middle;

	while (end >= start)
	{
		middle = (start + end) / 2;
		printf("Value checked array[%d] = [%d]\n", middle, array[middle]);
		if (array[middle] == value)
			return (middle);
		else if (array[middle] > value)
			end = middle - 1;
		else
			start = middle + 1;
	}
	return (-1);
}
