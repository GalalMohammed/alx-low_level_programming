#include <stdio.h>

/**
  * main - Prints the first 50 Fibonacci nums
  *
  * Return: 0
  */
int main(void)
{
	long int prev = 1, cur = 1, i, tmp;

	for (i = 0; i < 50; i++)
	{
		printf("%ld", cur);
		tmp = cur;
		cur = cur + prev;
		prev = tmp;
		if (i < 49)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
