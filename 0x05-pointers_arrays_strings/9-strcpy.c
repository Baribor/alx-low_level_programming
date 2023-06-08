/**
 * _strcpy - Copies a string to another variable.
 * @dest: Location to copy to
 * @src: Location to copy from
 * Return: Pointer to the copied string
 */
char *_strcpy(char *dest, char *src)
{
	int c = 0;

	while (1)
	{
		dest[c] = *(src + c);

		if (*(src + c) == '\0')
			break;
		c++;
	}
	return (dest);
}
