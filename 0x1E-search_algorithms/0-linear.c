#include "search_algos.h"

/**
 * linear_search - the Linear search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located,
 * If value is not present in array or array is NULL, returns -1
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array)
		for (i = 0; i < (int)size; i++)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	return (-1);
}
