#include "main.h"
#include <stdio.h>

/**
 *  _strlen_recursion - a function that returns the length of a string.
 *  @s: string length to be determined.
 *  Return: integer
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
