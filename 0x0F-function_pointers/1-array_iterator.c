#include "function_pointers.h"

/**
  * array_iterator - executes a function on each element of an array
  * @array: array to be manipulated
  * @size: size of array
  * @action: function to be executed on each element
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size > 0 && action)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
