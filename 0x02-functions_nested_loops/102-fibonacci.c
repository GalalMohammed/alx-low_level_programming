#include <stdio.h>

/**
  * main - Prints the first 50 Fibonacci nums
  *
  * Retrun: 0
  */
int main(void)
{
	long long int prev = 1, cur = 1, i, tmp;

	for (i = 0; i < 50; i++)
	{
		printf("%d", cur);
		tmp = cur;
		cur = cur + prev;
		prev = tmp;
		if (i < 49)
			printf(", ");
	}
	return (0);
}
