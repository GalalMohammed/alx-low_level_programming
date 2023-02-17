#include <stdio.h>
/**
  * main - Prints 0,- 9 and '\n'
  *
  * Return: 0
  */
int main(void)
{
	int c = '0';

	for (; c <= '9'; c++)
	{
		putchar(c);
		if (c < '9')
		{
			putchar(',');
			putchar(' ' );
		}
		else
			putchar('\n');
	}
	return (0);
}
