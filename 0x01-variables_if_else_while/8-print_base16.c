#include <stdio.h>
/**
  * main - Prints 0x0-0xF, followed by a new line
  *
  * Return: 0
  */
int main(void)
{
	char c = '0';

	for (; c <= 'f'; c++)
	{
		putchar(c);
		if (c == 9)
			c = 'a' - 1;
	}
	putchar('\n');
	return (0);
}
