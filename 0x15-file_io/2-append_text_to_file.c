#include "main.h"
#include <string.h>

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int _fd;
	int _result;

	if (filename == NULL)
	{
		return (-1);
	}

	_fd = open(filename, O_WRONLY | O_APPEND);
	if (_fd == -1)
		return (-1);
	if (!text_content)
	{
		close(_fd);
		return (1);
	}

	_result = write(_fd, text_content, strlen(text_content));
		if (_result == -1 || _result != (int)strlen(text_content))
		{
			close(_fd);
			return (-1);
		}
	close(_fd);
	return (1);
}

