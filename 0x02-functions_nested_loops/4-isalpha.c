#include "main.h"

/**
  * _isalpha - Checks for alpha char
  * @c: char to be checked
  *
  * Return: 1 if c is alpha, 0 otherwise
  */
int _isalpha(int c)
{
	return ((c <= 97 + 26 && c > 97) || (c <= 65 + 26 && c > 65));
}
