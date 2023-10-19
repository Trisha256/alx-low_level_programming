#include "main.h"
#include <string.h>

/**
 * *_strncpy - a function that copies a string
 * @src: source string
 * @n: number of characters in source string
 * @dest: destination string
 * Return: dest_start
 */

char *_strncpy(char *dest, char *src, int n)
{
	char* dest_start = dest;

	while (*src && n > 0 )
	{
		*dest++ = *src++;
		n--;
	}
	while (n > 0)
	{
		*dest++ = '\0';
		n--;
	}
	return dest_start;
}




