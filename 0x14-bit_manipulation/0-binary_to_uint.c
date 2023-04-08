#include "main.h"

/**
  * binary_to_uint - converts a binary to uint
  * @b: pointer to str
  *
  * Return: converted number or 0 if null or non 0 nor 1
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b)
	{
		while (*b)
		{
			if (*b == '0')
			{
				num <<= 1;
			}
			else if (*b == '1')
			{
				num = (num << 1) + 1;
			}
			else
			{
				return (0);
			}
			b++;
		}
	}
	return (num);
}
