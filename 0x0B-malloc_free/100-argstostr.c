#include <stdlib.h>
#include <string.h>

/**
 * argstostr - merge all arguments as a single string
 * @ac: number of arguments
 * @av: arguments
 * Return: The merge arguments as string
 */
char *argstostr(int ac, char **av)
{
	char *s, *a;
	int size = ac, i, j = 0, k = 0;

	if (ac == 0 || !av)
		return (NULL);

	for (i = 0; i < ac; ++i)
		size += strlen(av[i]);

	s = (char *)malloc(size * sizeof(char) + 1);
	if (!s)
		return (NULL);

	for (i = 0; i < ac; ++i, j = 0)
	{
		a = av[i];
		while (a[j] != '\0')
			s[k++] = a[j++];
		s[k++] = '\n';
	}
	s[k] = '\0';
	return (s);
}
