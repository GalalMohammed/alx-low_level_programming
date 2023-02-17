#include <stdio.h>
/**
  * main - Prints the alphabet in lowercase, and in uppercase, and '\n'
  *
  * Return: 0
  */
int main(void)
{
	char c = 'a';

	for (; c != 'Z'; c++)
	{
		putchar(c);
		if (c == 'z')
			c = 'A';
	}
	putchar('\n');
	return (0);
}
