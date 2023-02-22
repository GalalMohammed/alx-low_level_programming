#include "main.h"

/**
  * print_alphabet - Prints the lowercase alphabet
  */
void print_alphabet(void)
{
	char c = 'a';

	for (; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return;
}
