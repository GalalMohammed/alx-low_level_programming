#include "main.h"

/**
  * print_rev - prints rev of str, followed by a new line
  * @s: str to be rev
  */
void print_rev(char *s)
{
	char *s_end = s;

	while (*s_end != '\0')
	{
		s_end++;
	}
	while (s_end >= s)
	{
		_putchar(*s_end);
		s_end--;
	}
	_putchar('\n');
}
