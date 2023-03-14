#include "main.h"
#include <stdlib.h>

/**
  * str_concat - concats 2 strs
  * @s1: first str
  * @s2: second str
  *
  * Return: pointer to new space allocated for the res
  */
char *str_concat(char *s1, char *s2)
{
	char *s1cpy = s1, *s2cpy = s2, *str, *strcpy;
	int len1 = 0, len2 = 0, len;

	if (s1 != (void *)'\0')
	{
		while (*s1cpy != '\0')
		{
			len1++;
			s1cpy++;
		}
		len1++;
	}
	if (s2 != (void *)'\0')
	{
		while (*s2cpy != '\0')
		{
			len2++;
			s2cpy++;
		}
		len2++;
	}
	if (len1 || len2)
	{
		str = (char *)malloc((len1 - 1 + len2) * sizeof(char));
		strcpy = str;
		len = len1 + len2;
		s1cpy = s1;
		s2cpy = s2;
		while (len--)
		{
			if (len1 > 1)
			{
				*strcpy = *s1cpy;
				s1cpy++;
				len1--;
			}
			else if (len2 > 1)
			{
				*strcpy = *s2cpy;
				s2cpy++;
				len2--;
			}
			strcpy++;
		}
		*strcpy = '\0';
	}
	else
	{
		str = (char *)malloc(sizeof(char));
		str[0] = '\0';
	}
	return (str);
}
