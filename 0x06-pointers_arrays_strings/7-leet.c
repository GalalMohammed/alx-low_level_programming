#include "main.h"

/**
  * leet - 3nc0d3s 4 s7r int0 1337
  * @str: s7r 70 b3 3nc0d3d
  *
  * Return: p0in73r 70 s7r
  */
char *leet(char *str)
{
	char dic['t' + 1];
	char *strcpy = str;
	dic['a'] = dic['A'] = 4;
	dic['e'] = dic['E'] = 3;
	dic['o'] = dic['O'] = 0;
	dic['t'] = dic['T'] = 7;
	dic['l'] = dic['L'] = 1;
	while (*strcpy != '\0')
	{
		if (*strcpy == 'a' || *strcpy == 'A' || *strcpy == 'e'
				|| *strcpy == 'E' || *strcpy == 'o'
				|| *strcpy == 'O' || *strcpy == 't'
				|| *strcpy == 'T' || *strcpy == 'l'
				|| *strcpy == 'L')
		{
			*strcpy = dic[*strcpy];
		}
		strcpy++;
	}
	return (str);
}
