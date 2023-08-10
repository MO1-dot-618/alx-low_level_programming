#include "main.h"
#include <stdlib.h>
/**
 * array_range - array of int
 * @min: int
 * @max: int
 * Return: pointer
 */
int *array_range(int min, int max)
{
	if (min > max)
	{
		return (NULL);
	}
	else
	{
		int *arr = malloc(max - min + 1);
		int i;

		if (arr == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < (max - min + 1) ; i++)
		{
			arr[i] = i + min;
		}
		return (arr);
	}
}
