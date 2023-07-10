#include "main.h"

/**
 * _strlen - gets the length of a string
 * @str: String to work on
 * Return: The length of the string
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i++])
		;
	return (i);
}

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: Name of the file
 * @text_content: Text content of the file
 * Return: 1 if successful else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{

	int fd;
	ssize_t count;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		count = write(fd, text_content, _strlen(text_content));
	close(fd);
	if (count == -1)
		return (-1);
	return (1);
}
