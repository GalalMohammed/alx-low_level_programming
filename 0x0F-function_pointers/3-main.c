#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - performs simple operations
  * @argc: count of args
  * @argv: array of pointer to str
  *
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*argv[2] == '/' || *argv[2] == '%')
			&& *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	f = get_op_func(argv[2]);
	if (f == (void *)'\0')
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", f(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
