#include "main.h"

/**
  * print_times_table - Prints n times table
  * @n: tables to be printed
  */
void print_times_table(int n)
{
	int i, j;

	if (n > 15 && n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (i * j < 10)
			{
				if (j > 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + i * j);
			}
			else
			{
				_putchar(' ');
				_putchar('0' + i * j / 10);
				_putchar('0' + i * j % 10);
			}
			if (j < n)
				_putchar(',');
			else
				_putchar('\n');
		}
	}
}
