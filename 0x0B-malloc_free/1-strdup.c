#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 * Return: The dublicted string
 */
char *_strdup(char *str)
{
	char *s;
	int size, i = 0;

	if (!str)
		return (NULL);

	size = strlen(str);

	s = malloc(size * sizeof(char) + 1);
	if (!s)
		return (NULL);

	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
