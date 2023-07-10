#include <stdlib.h>
#include "main.h"

/**
 * read_textfile -  function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: Name of the file
 * @letter: Number of characters to read
 * Return: the number characters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t _open, _read, _write;
	char *buf;

	if (!filename)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	_open = open(filename, O_RDONLY);
	_read = read(_open, buf, letters);
	_write = write(STDOUT_FILENO, buf, _read);

	if (_open == -1 || _read == -1 || _write == -1 || _write != _read)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(_open);

	return (_write);
}
