#include "search_algos.h"

/**
 * binary_search - the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located,If value is not present in array
 * or if array is NULL, returns -1
 */
int binary_search(int *array, size_t size, int value)
{
	int L = 0, R = size - 1, m = 0, i;

	if (array)
		while (L <= R)
		{
			printf("Searching in array: ");
			for (i = L; i <= R; i++)
			{
				printf("%d", array[i]);
				if (i != R)
					printf(", ");
			}
			printf("\n");
			m = (L + R) / 2;
			if (array[m] < value)
				L = m + 1;
			else if (array[m] > value)
				R = m - 1;
			else
				return m;
		}
	return (-1);
}
