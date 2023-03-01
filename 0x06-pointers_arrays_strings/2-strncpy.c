#include "main.h"

/**
  * _strncpy - copies a string
  * @dest: pointer to destination
  * @src: str to be copied
  * @n: bytes to be copied
  *
  * Return: pointer to dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	char *destcpy = dest;

	while (n--)
	{
		*destcpy = *src;
		src++;
		destcpy++;
	}
	if (n)
	{
		if (*src == '\0')
		{
			*dest = '\0';
		}
	}
	return (dest);
}
