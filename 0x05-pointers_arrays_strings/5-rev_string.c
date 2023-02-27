#include "main.h"

/**
  * swapchar - swaps two chars
  * @c1: first char
  * @c2: second char
  */
void swapchar(char *c1, char *c2)
{
	char tmp = *c1 ^ *c2;

	*c1 = tmp ^ *c1;
	*c2 = tmp ^ *c2;
}

/**
  * rev_string - rev a str
  * @s: str to be rev
  */
void rev_string(char *s)
{
	char *s_end = s, i = 0;

	while (*s_end != '\0')
	{
		s_end++;
		i++;
	}
	s_end--;
	while (s != s_end)
	{
		swapchar(s, s_end);
		s++;
		s_end--;
	}
}
