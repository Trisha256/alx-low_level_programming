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
	ssize_t _result;

	if (!filename)
	{
		return (-1);
	}

	_fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (_fd == -1)
		return (-1);
	if (text_content != NULL)
	{
	_result = write(_fd, text_content, strlen(text_content));
	if (_result == -1)
	{
		close(_fd);
		return (-1);
	}
	}
	close(_fd);
	return (1);
}
