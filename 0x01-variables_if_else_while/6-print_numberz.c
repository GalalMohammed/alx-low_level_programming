#include <stdio.h>
/**
  * main - Prints 0-9 then '\n'
  *
  * Return: 0
  */
int main(void)
{
	short int c = '0';

	for (; c <= '9'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
