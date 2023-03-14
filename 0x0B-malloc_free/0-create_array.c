#include "main.h"
#include <stdlib.h>

/**
  * create_array - creates array of chars initialized with a char
  * @size: size of array
  * @c: initialization
  *
  * Return: pointer to array or NULL if it fails
  */
char *create_array(unsigned int size, char c)
{
	if (size)
	{
		char *arr = (char *)malloc(size * sizeof(char));

		while (size--)
		{
			*arr = c;
			arr++;
		}
		return (arr);
	}
	else
	{
		return ((void *)'\0');
	}
}
