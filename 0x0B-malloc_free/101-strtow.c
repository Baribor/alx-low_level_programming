#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int noOfWords(char *str)
{
	int words = 0, s = strlen(str);
	int i = 0, isSpace = 0;
	
	while (i < s)
	{
		if (str[i] == ' ')
		{
			isSpace = 1;
		}
		else
		{
			if (isSpace)
				words++;
			isSpace = 0;
		}
		i++;
	} 
	return (words);
}

void slice(char *str, int **arr)
{
	int s = strlen(str), i = 0, j = 0;
	int isSpace = 0, c = 0;
	
	while (i < s)
	{
		if (str[i] == ' ')
		{
			isSpace = 1;
			c = 0;
		}
		else
		{
			if (isSpace)
			{
				*arr[j++] = c;
				c = 0;
			}
			isSpace = 0;
			c++;
		}
		i++;
	}
	
	if (c != 0)
		*arr[j] = c;
}

char **strtow(char *str)
{
	char **arr;
	int s = strlen(str), i = 0;
	int isSpace = 0, count = 0, words;
	int **wLen;
	
	if (!str || str == "")
		return (NULL);
		
	words = noOfWords(str);
	wLen = (int **) malloc(words * sizeof(int *));
	slice(str, wLen);
	
	for (i = 0; i < words; ++i)
	{
		printf("%ls\n", wLen[i]);
	}
	printf("%d", words);
	
	return (arr);
}
	