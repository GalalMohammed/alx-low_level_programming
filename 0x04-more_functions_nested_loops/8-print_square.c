#include "main.h"

/**
  * print_square - What a descriptive name
  * @size: I think it's obvious
  */
void print_square(int size)
{
	int i, l;

	for (i = 0; i < size; i++)
	{
		for (l = 0; l < size; l++)
		{
			_putchar('#');
		}
		if (i != size - 1)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
