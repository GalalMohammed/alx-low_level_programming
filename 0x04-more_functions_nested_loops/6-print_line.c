#include "main.h"

/**
  * print_line - draws a straight line in the terminal
  * @n: num of times of _
  */
void print_line(int n)
{
	while (n > 0 && n--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
