#include <stdio.h>

/**
  * main - Prints the sum of the even terms
  *
  * Return: 0
  */
int main(void)
{
	long int prev = 1, cur = 1, tmp, sum = 0;

	for (; cur <= 4000000;)
	{
		if (cur % 2 == 0)
			sum += cur;
		tmp = cur;
		cur = cur + prev;
		prev = tmp;
	}
	printf("%ld\n", sum);
	return (0);
}
