#include <stdio.h>
#include <math.h>

/**
  * main - prints the largest prime factor of 612852475143
  *
  * Return: 0
  */
int main(void)
{
	long int num = 612852475143, i, j;
	while (num % 2 == 0)
	{
		num /= 2;
	}
	for (i = 3; i < num; i += 2)
	{
		for (j = 3; j < i; j += 2)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j == i)
		{
			while (num % i == 0)
			{
				num /= i;
			}
		}
		if (num == 1)
		{
			break;
		}
	}
	printf("%ld\n", i);
	return (0);
}
