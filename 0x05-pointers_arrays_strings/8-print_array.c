#include "main.h"
#include <stdio.h>

/**
  * print_array - prints n elements of an array of ints, followed by '\n'
  * @a: array to be printed
  * @n: num of elements to be printed
  */
void print_array(int *a, int n)
{
	char i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
