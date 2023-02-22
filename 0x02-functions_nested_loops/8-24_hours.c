#include "main.h"

/**
  * jack_bauer - print 00:00 - 23:59
  */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			if (i < 10)
				_putchar('0');
			_putchar('0' + i);
			_putchar(':');
			if (j < 10)
				_putchar('0');
			putchar('0' + j);
			_putchar('\n');
		}
	}
}
