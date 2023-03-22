#include "function_pointers.h"

/**
  * int_index - searches for an int
  * @array: array to be searched
  * @size: array size
  * @cmp: pointer to function to be used to compare values
  *
  * Return: index for first element for which cmp doesn't return 0,
  * -1 if no matches
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && size > 0 && cmp)
	{
		int i;

		for (i = 0; i < (int)size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
