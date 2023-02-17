#include <stdio.h>
/**
  * main - Prints the alphabet in lowercase except 'q' and 'e', and '\n'
  *
  * Return: 0
  */
int main(void)
{
	char c = 'a';

	for (; c <= 'z'; c++)
	{
		if (c == 'q' || c == 'e')
			continue;
		putchar(c);
	}
	putchar('\n');
	return (0);
}
