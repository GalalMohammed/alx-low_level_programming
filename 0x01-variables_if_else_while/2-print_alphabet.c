#include <stdio.h>
/**
  * main - Prints the alphabet in lowercase, followed by a new line
  *
  * Return: 0
  */
int main(void)
{
	char c = 'a';

	for (; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
