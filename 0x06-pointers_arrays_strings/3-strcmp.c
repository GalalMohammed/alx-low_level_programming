#include "main.h"

/**
  * _strcmp - compares two strs
  * @s1: first str to be compared
  * @s2: second str to be compared
  *
  * Return: 0 if the s1 & s2 are equal
  * a negative value if s1 is less than s2
  * a positive value if s1 is greater than s2
  */
int _strcmp(char *s1, char *s2)
{
	unsigned int diff = 0;

	while (*s1 != '\0' || *s2 != '\0')
	{
		diff = *s1 - *s2;
		if (*s1 != '\0')
		{
			s1++;
		}
		if (*s2 != '\0')
		{
			s2++;
		}
	}
	return (diff);
}
