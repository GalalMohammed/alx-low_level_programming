#include "main.h"

/**
  * strchr - locates a char in an str
  * @s: string
  * @c: char to be located
  *
  * Return: pointer to first occurrence of c, or NULL if it is not found
  */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ((void *)'\0');
}
