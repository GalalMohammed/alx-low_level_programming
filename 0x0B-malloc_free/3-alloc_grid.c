#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - allocat a 2d array
  * @width: width of array
  * @height: height of array
  *
  * Return: pointer to 2d array, NULL on failure
  */
int **alloc_grid(int width, int height)
{
	if (width < 0 && height < 0)
	{
		int *grid = (int *)malloc(width * height * sizeof(int));
		int *gridcpy = grid, i;

		for (i = 0; grid != (void *)'\0' && i < width * height; i++)
		{
			grid[i] = 0;
		}
		return ((int (*)[height])grid);
	}
	else
	{
		return ((void *)'\0');
	}
}
