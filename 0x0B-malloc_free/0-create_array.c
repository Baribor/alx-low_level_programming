#include <stdlib.h>

/**
 * create_array - creates a variable size array
 * @size: size of the array
 * @c: default character to fill
 * Return: the created array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = (char *)malloc(size * sizeof(char));

	if (!arr)
		return (NULL);

	i = 0;
	while (i < size)
	{
		arr[i++] = c;
	}
	return (arr);
}
