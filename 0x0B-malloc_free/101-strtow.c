#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * wordCount - Counts the number of words in the string
 * @str: String to work on
 * Return: The number of words in the string
 */
int wordCount(char *str)
{
	int i = 0;
	int c = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			i++;
		}
		else
		{
			while (str[i] != ' ' && str[i] != '\0')
			{
				i++;
			}
			c++;
		}
	}

	return (c);
}

/**
 * getNextWordcount - Returns the next word count.
 * @str: String to search
 * @startIndex: Index in str to start from
 * Return: The number of characters in the next word
 */
int getNextWordcount(char *str, int startIndex)
{
	int c = 0;

	while (str[startIndex] != '\0' && str[startIndex] != ' ')
	{
		startIndex++;
		c++;
	}

	return (c);
}

/**
 * strtow - Split a string into an array of words
 * @str: Merory area to split
 * Return: Pointer to the array of words.
 */
char **strtow(char *str)
{
	char **arr;
	char *w;
	int words, wCount, i = 0, aIndex = 0, wIndex = 0;

	if (!str || *str == '\0')
		return (NULL);

	words = wordCount(str);

	arr = (char **)malloc(sizeof(char *) * (words + 1));

	if (!arr)
		return (NULL);

	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			i++;
		}
		else
		{
			wCount = getNextWordcount(str, i);
			w = (char *)malloc(sizeof(char) * (wCount + 1));
			if (!w)
				return (NULL);

			wIndex = 0;
			while (str[i] != ' ' && str[i] != '\0')
			{
				w[wIndex++] = str[i];
				i++;
			}
			w[wIndex] = '\0';
			arr[aIndex++] = w;
		}
	}

	arr[aIndex] = NULL;
	return (arr);
}
