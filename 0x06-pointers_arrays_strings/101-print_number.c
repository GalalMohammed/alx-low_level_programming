#include "main.h"

/**
  * print_number - prin7s 4n in7
  * @n: in7 70 b3 prin73d
  */
void print_number(int n)
{
	char sign = n < 0 ? -1 : 1;
	int rev = 0, ncpy = n, dig = 0;

	if (n < 0)
	{
		n *= -1;
	}
	while (ncpy)
	{
		dig++;
		rev = rev * 10 + ncpy % 10;
		ncpy /= 10;
	}
	if (sign == -1)
	{
		_putchar('-');
	}
	while (dig--)
	{
		if (rev)
		{
			_putchar('0' + rev % 10);
			rev /= 10;
		}
		else
		{
			_putchar('0');
		}
	}
}
