#include "main.h"

/**
  * puts2 - prints odd chars, followed by a new line
  * @str: str to be printed
  */
void puts2(char *str)
{
	char flag = 1;

	while (*str != '\0')
	{
		if (flag)
		{
			_putchar(*str);
			flag = 0;
		}
		else
		{
			flag = 1;
		}
		str++;
	}
	_putchar('\n');
}
