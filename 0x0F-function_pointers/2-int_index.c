
/**
 * int_index - a function that searches for an integer
 * @array: Array to search
 * @size: the number of elements in the array
 * @cmp: a pointer to the function to be used to compare values.
 * Return: -1 if no match else the index of first match.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!(array && cmp))
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; ++i)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
