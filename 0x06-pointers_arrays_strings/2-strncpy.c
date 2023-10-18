#include "main.h"
#include <string.h>

/**
 * *_strncpy - a function that copies a string
 * @src: source string
 * @n: number of characters in source
 * @dest: destination string
 * Return: destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < 0)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
	}




