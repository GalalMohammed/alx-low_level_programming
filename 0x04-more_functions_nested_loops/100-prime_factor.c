#include <stdio.h>
#include <math.h>

/**
  * main - prints the largest prime factor of 612852475143
  *
  * Return: 0
  */
int main(void)
{
	long int num = 612852475143;
	long int start = sqrt(num), i;

	while (1)
	{
		if (num % start == 0)
		{
			for (i = 2; i < start; i++)
			{
				if (start % i == 0)
				{
					start--;
					break;
				}
			}
			if (i == start)
			{
				break;
			}
		}
		else
		{
			start--;
		}
	}
	printf("%ld\n", start);
	return (0);
}
