#include "main.h"

/**
  * print_alphabet_x10 - Prints the lowercase alphabet x 10
  */
void print_alphabet_x10(void)
{
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
