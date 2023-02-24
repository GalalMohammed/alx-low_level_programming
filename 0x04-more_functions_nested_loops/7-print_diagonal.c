#include "main.h"

/**
  * print_diagonal - draws a diagonal line
  * @n: num of times of \
  */
void print_diagonal(int n)
{
	int i, c;

	for (i = 0; i < n; i++)
	{
		for(c = 0; c < i; c++)
		{
			_putchar(' ');
		}
		_putchar('\');
	}
	_putchar('\n');
}
