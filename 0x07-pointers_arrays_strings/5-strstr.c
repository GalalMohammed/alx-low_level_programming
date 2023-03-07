#include "main.h"

/**
  * _strstr - locates a substr
  * @haystack: st
  * @needle: substr
  *
  * Return: pointer to substr, or NULL if it is not found
  */
char *_strstr(char *haystack, char *needle)
{
	char *needlecpy = needle, *haystackcpy = haystack;
	int i = 0;

	while (*haystack != '\0')
	{
		needlecpy = needle;
		haystackcpy = heystack;
		while (*needlecpy != '\0')
		{
			if (*needlecpy != *haystackcpu)
			{
				break;
			}
			needlecpy++;
			heystackcpy++;
		}
		if (*needlecpy == '\0')
		{
			return (heystack);
		}
		heystack++;
	}
	return ((void *)'\0');
}
