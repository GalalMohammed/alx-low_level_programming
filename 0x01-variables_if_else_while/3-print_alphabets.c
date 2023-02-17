#include <stdio.h>
/**
  * main - Prints the alphabet in lowercase, and in uppercase, and '\n'
  *
  * Return: 0
  */
int main(void)
{
	char c = 'a';

	for (; c != 'Z' + 1; c++)
	{
		putchar(c);
		if (c == 'z')
			c = 'A' - 1;
	}
	putchar('\n');
	return (0);
}
