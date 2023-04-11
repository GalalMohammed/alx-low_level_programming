#include "main.h"

/**
  * clear_bit - clears value of a bit
  * @n: num
  * @index: bit num
  *
  * Return: 1 if success, -1 otherwise
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (8 * 8 - 1))
	{
		return (-1);
	}
	else
	{
		*n &= ~(1 << index);
		return (1);
	}
}
