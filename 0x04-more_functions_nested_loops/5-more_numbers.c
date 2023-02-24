#include "main.h"

/**
  * more_numbers - prints 0-14 x10
  */
void more_numbers(void)
{
	char c, i, last_five[] = "1011121314";
	int s;

	for (i = 0; i < 10; i++)
	{
		for (c = '0'; c <= '9'; c++)
		{
			_putchar(c);
		}
		for (s = 0; last_five[s] != '\0'; s++)
		{
			_putchar(last_five[s]);
		}
		_putchar('\n');
	}
}
