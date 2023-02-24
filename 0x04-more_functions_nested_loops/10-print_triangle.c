#include "main.h"

/**
  * print_trangle - Yes! You got it right!
  * @size: that's right too. WOW, you are so smart
  */
void print_triangle(int size)
{
	int i, s, t;

	for (i = size; i > 0; i--)
	{
		for (s = i - 1; s > 0; s--)
		{
			_putchar(' ');
		}
		for (t = 0; t <= size - i; t++)
		{
			_putchar('#');
		}
		if (i != 1)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
