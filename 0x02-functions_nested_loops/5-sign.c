#include "main.h"

/**
  * print_sign - print sign of a number
  * @n: num to be checked
  *
  * Return: 1 if n > 0, -1 if n < 0, 0 otherwise
  */
int print_sign(int n)
{
	_putchar(n < 0 ? '-' : n > 0 ? '+' : '0')
	return (n < 0 ? -1 : n > 0);
}
