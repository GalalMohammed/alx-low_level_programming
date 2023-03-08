#include "main.h"

/**
  * factorial - copmutes factorial of num
  * @n: num to be computed
  *
  * Return : factorial of num
  */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n > 1)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (1);
	}
}
