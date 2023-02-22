#include "main.h"

/**
  * print_last_digit - the name is very descriptive
  * @n: num to be computed
  *
  * Return: last digit of n
  */
int print_last_digit(int n)
{
	_putchar('0' + (n % 10 < 0 ? -(n % 10) : n % 10));
	return (n % 10 < 0 ? -(n % 10) : n % 10);
}
