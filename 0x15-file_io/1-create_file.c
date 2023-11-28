#include "main.h"
#include <string.h>

/**
 * create_file - a function that creates a file.
 * @text_content: is a NULL terminated string to write to the file
 * @filename: is the name of the file to create
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int _fd;
	int letters;
	int _rw;

	if (!filename)
		return (-1);

	_fd = open(filename | O_WRONLY | O_CREAT | O_TRUNC | 0600);
	if (_fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (letters = 0; text_content[letters]; letters++)
		;
	_rw = write(_fd, text_content, letters);
		if (_rw == -1)
			return (-1);
	close(_fd);
	return (1);
}
