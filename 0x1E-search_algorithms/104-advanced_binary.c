#include "search_algos.h"

/**
 * advanced_binary - search value binary style
 * @array: input
 * @size: size of array
 * @value: value
 * Return: index or -1
 */
int recursive_binary(int *array, size_t size, int value, int start, int end)
{
	int middle, i;

	if (start > end)
		return (-1);
	else
	{
		middle = (start + end) / 2;
                printf("Searching in array: ");
                for (i = start; i < end; i++)
                {
                        printf("%d, ", array[i]);
                }
                printf("%d\n", array[i]);
                if (array[middle] == value)
                        return (middle);
                else if (array[middle] > value)
                        recursive_binary(array, size, value, start, middle -1);
                else
                        recursive_binary(array, size, value, middle + 1, end);
	}
}

int advanced_binary(int *array, size_t size, int value)
{
	int start = 0, end = (int)size - 1;

	return (recursive_binary(array, size, value, start, end));
}
