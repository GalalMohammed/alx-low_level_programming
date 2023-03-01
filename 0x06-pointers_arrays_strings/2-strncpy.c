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

	while (*src != '\0' && n--)
	{
		*destcpy = *src;
		src++;
		destcpy++;
	}
	return (dest);
}
