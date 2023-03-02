#include "main.h"

/**
  * rot13 - 3nc0d3s 4 s7r using r0713
  * @str: s7r 70 b3 3nc0d3d
  *
  * Return: p0in73r 70 s7r
  */
char *rot13(char *str)
{
	char *cpy = str;
	char dic[97 + 26];
	int i;

	for (i = 65; i < 65 + 13; i++)
	{
		dic[i] = i + 13;
		dic[i + 32] = i + 32 + 13;
		dic[i + 13] = i;
		dic[i + 32 + 13] = i + 32;
	}
	while (*cpy != '\0')
	{
		if (*cpy >= 65 && *cpy < 65 + 26 ||
				*cpy >= 97 && *cpy < 97 + 26)
		{
			*cpy = dic[(int)*cpy];
		}
		cpy++;
	}
	return (str);
}
