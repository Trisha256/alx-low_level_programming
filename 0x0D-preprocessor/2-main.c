#include "main.h"
#include <unistd.h>

/**
 * main - prints the name of the file it was compiled from
 * Return: 0 (success)
 */

int main(void)
{
	const char *FILE = __FILE__;

	while (*FILE != '\0')
	{
		_putchar(*FILE);
		FILE++;
	}
	_putchar('\n');
	return (0);
}
