#include "main.h"

/**
  * print_binary - prints binary of number
  * @n: number
  */
void print_binary(unsigned long int n)
{
	unsigned long int checker = 0x80000000;
	char non_zero = 0;

	if (n)
	{
		while (checker)
		{
			if (n & checker)
			{
				non_zero = 1;
			}
			if (non_zero)
			{
				_putchar(n & checker ? '1' : '0');
			}
			checker >>= 1;
		}
	}
	else
	{
		_putchar('0');
	}
}
