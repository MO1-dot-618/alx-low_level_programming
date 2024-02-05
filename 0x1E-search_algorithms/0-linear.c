#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value)
{
	int i;

	for (i = 0; i < (int) size; i++)
	{
		if (array[i] == value)
			return i;
		else
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
	}
	return -1;
}
