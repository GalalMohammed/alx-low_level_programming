#include "main.h"

/**
  * times_table - Prints 9 times table
  */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
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
			if (j < 9)
				_putchar(',');
			else
				_putchar('\n');
		}
	}
}
