#include "main.h"
#include <stdio.h>

/**
  * print_to_98 - Prints natural nums to 98
  * @n: num to start from
 */
void print_to_98(int n)
{
	int tmp, counter;

	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{

		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
