#include <stdio.h>
#include <stdlib.h>

/**
  * main - adds positive nums
  * @argc: count of args
  * @argv: array of pointer to the strings
  *
  * Return: exit status
  */
int main(int argc, char *argv[])
{
	int sum = 0, i = 1;

	argc--;
	while (argc--)
	{
		if (atoi(argv[i]) == 0 && !(argv[i][0] == '0'
				&& argv[i][1] == '\0'))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]) > 0 ? atoi(argv[i]) : 0;
			i++;
		}
	}
	printf("%d\n", sum);
	return (0);
}
