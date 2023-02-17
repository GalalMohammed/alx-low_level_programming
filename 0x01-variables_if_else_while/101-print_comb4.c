#include <stdio.h>
/**
  * main - Prints combs of 3 different digits
  *
  * Return: 0
  */
int main(void)
{
	int i = '0', j, k;

	for (; i <= '7'; i++)
	{
		for (j = i + 1; j <= '8'; j++)
		{
			for (k = j + 1; k <= '9'; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == '7' && j == '8' && k == '9')
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
	}
	return (0);
}
