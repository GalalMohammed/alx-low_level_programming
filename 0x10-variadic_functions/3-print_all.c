#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_all - descriptive name, followed by '\n'
  * @format: list of types of args
  */
void print_all(const char * const format, ...)
{
	va_list args;
	char const *s = format, *str;
	char printed;

	va_start(args, format);
	while (*s)
	{
		printed = 1;
		switch ((int)*s)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				switch ((long)str)
				{
					case 0:
						printf("(nil)");
						break;
					default:
						printf("%s", str);
				}
				break;
			default:
				printed = 0;
		}
		s++;
		if (*s && printed)
			printf(", ");
	}
	va_end(args);
	printf("\n");
}
