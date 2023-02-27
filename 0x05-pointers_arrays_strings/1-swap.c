#include "main.h"

/**
  * swap_int - swaps values of two ints
  * @a: first int
  * @b: second int
  */
void swap_int(int *a, int *b)
{
	int tmp = *a ^ *b;

	*a = tmp ^ *a;
	*b = tmp ^ *b;
}
