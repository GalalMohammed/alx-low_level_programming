#include "main.h"

/**
  * flip_bits - computes number of bits to be flipped to get another num
  * @n: num
  * @m: num
  *
  * Return: number of flips
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int flips = 0;

	while (diff)
	{
		flips += diff & 1;
		diff >>= 1;
	}
	return (flips);
}
