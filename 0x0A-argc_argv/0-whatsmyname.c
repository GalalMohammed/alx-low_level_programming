#include "main.h"

/**
  * main - prints its name followed by a new line
  * @argc: count of args
  * @argv: array of pointer to the strings
  *
  * Return: exit status
  */
int main(int argc, char *argv[])
{
	(void) argc;
	while (*argv[0] != '\0')
	{
		_putchar(*argv[0]);
		argv[0]++;
	}
	return (0);
}
