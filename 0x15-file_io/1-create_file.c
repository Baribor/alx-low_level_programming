#include <stdlib.h>
#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: Name of the file
 * @text_content: Text content of the file
 */
int create_file(const char *filename, char *text_content)
{
	int _open, _write, count = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
			count++;
	}

	_open = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	_write = write(_open, text_content, count);

	if (_open == -1 || _write == -1)
		return (-1);

	close(_open);

	return (1);
}
