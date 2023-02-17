#include <stdio.h>
/**
  * main - Prints the rev alphabet in lowercase, followed by a new line
  *
  * Return: 0
  */
int main(void)
{
	char c = 'z';

	for (; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
