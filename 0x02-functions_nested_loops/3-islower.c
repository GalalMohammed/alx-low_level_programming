#include "main.h"

/**
  * _islower - Checks for lowercase char
  * @c: char to be checked
  *
  * Return: 1 if c is lowercase, 0 otherwise
  */
int _islower(int c)
{
	return (c <= 97 + 26 && c > 97);
}
