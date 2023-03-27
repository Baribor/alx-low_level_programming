/**
 * _strlen - Get the length of a string
 * @s: pointer to the string array of characters
 * Return: (int) The length of the string
 */
int _strlen(char *s)
{
	int c = 0;

	while (1)
	{
		if (*(s + c) == '\0')
			break;
		c++;
	}
	return (c);
}
