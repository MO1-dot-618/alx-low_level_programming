#include "search_algos.h"

/**
 * interpolation_search - search value binary style
 * @array: input
 * @size: size of array
 * @value: value
 * Return: index or -1
 */

int interpolation_search(int *array, size_t size, int value)
{
        int start = 0, end = (int)size - 1;
        int middle;

        while (end >= start)
        {
                middle = start  + (value - array[start]) * (end - start) /
                        (array[end] - array[start]);
                if (middle >= (int)size)
                {
                        printf("Value checked array[%d] is out of range\n", middle);
			break;
                }
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
