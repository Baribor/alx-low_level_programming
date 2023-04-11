#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = malloc(size * sizeof(char));
	i = 0;
	while (i < size)
	{
		arr[i++] = c;
	}
	return (arr);
}
