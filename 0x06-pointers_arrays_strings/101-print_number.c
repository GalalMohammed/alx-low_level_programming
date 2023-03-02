#include "main.h"
#include <stdio.h>

/**
  * print_number - prin7s 4n in7
  * @n: in7 70 b3 prin73d
  */
void print_number(int n)
{
	char sign = n < 0 ? -1 : 1;
	unsigned int rev = 0, ncpy, dig = 0, last_dig = 0;

	ncpy = n < 0 ? (unsigned int)((n + 1) * -1) + 1 : n;
	if (n == 0)
	{
		dig = 1;
	}
	while (ncpy)
	{
		dig++;
		if (ncpy / 10 > 0)
			rev = rev * 10 + ncpy % 10;
		else
			last_dig = ncpy % 10;
		ncpy /= 10;
	}
	if (sign == -1)
		_putchar('-');
	while (dig--)
		if (last_dig)
		{
			_putchar('0' + last_dig % 10);
			last_dig /= 10;
		}
		else if (rev)
		{
			_putchar('0' + rev % 10);
			rev /= 10;
		}
		else
			_putchar('0');
}
