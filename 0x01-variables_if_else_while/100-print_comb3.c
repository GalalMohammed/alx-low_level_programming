#include <stdio.h>
/**
  * main - Prints combs of 2 different digits
  *
  * Return: 0
  */
int main(void)
{
	int i = '0', j;

	for (; i <= '8'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			if (i == '8' && j == '9')
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
