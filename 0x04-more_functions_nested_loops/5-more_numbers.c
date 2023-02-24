#include "main.h"

/**
  * more_numbers - prints 0-14 x10
  */
void more_numbers(void)
{
	char c, i, last_five[] = "1011121314";

	for (i = 0; i < 10; i++)
	{
		for (c = '0'; c <= '9'; c++)
		{
			_putchar(c);
		}
		for (c = 0; last_five[c] != '\0'; c++)
		{
			_putchar(last_five[c]);
		}
		_putchar('\n');
	}
}
