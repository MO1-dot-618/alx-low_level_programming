#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value using jumps
 * @array: input
 * @size: size array
 * @value: value
 * Return: index or -1
 */
int jump_search(int *array, size_t size, int value)
{
	int step = sqrt(size);
	int i = 0;

	if (array == NULL)
		return (-1);

	for (;  i < (int)size && i < value; i += step)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	printf("Value found between indexes [%d] and [%d]\n", (i - step), i);
	for (i = i - step; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
