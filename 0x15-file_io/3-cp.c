#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if the file can be opened
 * @file_to: file_to
 * @file_from: file_from
 * @argv: argument vector
 * Return: void
 */

void error_file(int file_to, int file_from, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check code for Holberton school students
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t _write, _nchars;

	char _buffer[1024];
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	_nchars = 1024;
	while (_nchars == 1024)
	{
		_nchars = read(file_from, _buffer, 1024);
		if (_nchars == -1)
			error_file(-1, 0, argv);
		_write = write(file_to, _buffer, _nchars);
		if (_write == -1)
			error_file(0, -1, argv);
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}

