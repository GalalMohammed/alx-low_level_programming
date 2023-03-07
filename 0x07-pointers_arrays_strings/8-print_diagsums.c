#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - prints sum of two diagonals of a square mat of ints
  * @a: mat
  * @size: size of mat
  */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, i;

	for (sum1 = 0, sum2 = 0, i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + size - 1 + (size - 1) * i);
	}
	printf("%d, %d\n", sum1, sum2);
}
