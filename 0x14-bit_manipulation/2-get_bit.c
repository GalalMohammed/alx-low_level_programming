#include "main.h"

/**
  * get_bit - gets value of a bit
  * @n: num
  * @index: bit num
  *
  * Return: bit value, -1 if error occured
  */
int get_bit(unsigned long int n, unsigned int index)
{
	return (index > (8 * 8 - 1) ? -1 : (int)((n >> index) & 1));
}
