#include <stdio.h>
/**
  * main - Prints combs of 4 different digits
  *
  * Return: 0
  */
int main(void)
{
	int i = '0', j, k, l;

	for (; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = i; k <= '9'; k++)
			{
				for (l = (k == i ? j + 1 : '0'); l <= '9'; l++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i == '9' && j == '8' && k == '9' && l == '9')
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
	}
	return (0);
}
