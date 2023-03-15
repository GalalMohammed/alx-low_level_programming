#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * strtow - splits str into words
  * @str: str to be splitted
  *
  * Return: pointer to array of str, NULL if str = NULL or str = "" or it fails
  */
char **strtow(char *str)
{
	if (str != (void *)'\0' && *str != '\0')
	{
		char *strcpy = str, **wordsArray;
		int words = 1, len, wordIndex = 0, i;

		if (*strcpy != ' ')
		{
			words++;
		}
		strcpy++;
		while (*strcpy != '\0')
		{
			if (*strcpy != ' ' && *(strcpy - 1) == ' ')
			{
				words++;
			}
			strcpy++;
		}
		wordsArray = (char **)malloc(words * sizeof(char *));
		if (wordsArray != (void *)'\0')
		{
			strcpy = str;
			while (*strcpy != '\0')
			{
				len = 0;
				if (*strcpy != ' ')
				{
					while (*(strcpy + len) != ' ' && strcpy[len] != '\0')
					{
						len++;
					}
					wordsArray[wordIndex] = (char *)malloc
						((len + 1) * sizeof(char));
					if (wordsArray[wordIndex] == (void *)'\0')
					{
						while (wordIndex--)
						{
							free(wordsArray[wordIndex]);
						}
						free(wordsArray);
						return ((void *)'\0');
					}
					for (i = 0; i < len; i++)
					{
						wordsArray[wordIndex][i] = *strcpy;
						strcpy++;
					}
					wordsArray[wordIndex][len] = '\0';
					wordIndex++;
				}
				strcpy++;
			}
			wordsArray[wordIndex] = (void *)'\0';
		}
		return (wordsArray);
	}
	else
	{
		return ((void *)'\0');
	}
}
