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
	int start = sqrt(num), i;

	while (1)
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
	printf("%d\n", start);
	return (0);
}
