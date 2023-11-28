#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - a function that reads a text file and
 * prints it to the POSIX standard output.
 * @letters: letters to be printed
 * @filename: name of the file
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int _fd;
	int _write, _read;

	if (filename == NULL)
	{
		return (0);
	}

	_fd = open(filename, O_RDONLY);
	if (_fd == -1)
		return (0);
	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		return (0);
	}
	_read = read(_fd, buffer, letters);
	if (_read < 0)
	{
		free(buffer);
		close(_fd);
		return (0);
	}
	_write = write(STDOUT_FILENO, buffer, _read);
	if (_write == -1)
	{
		free(buffer);
		close(_fd);
		return (0);
	}

	close(_fd);
	return (_read);
}
