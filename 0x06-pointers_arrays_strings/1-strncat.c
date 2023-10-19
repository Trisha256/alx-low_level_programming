#include "main.h"

/**
 * *_strncat - a function that concatenates two strings
 * @src: source
 * @dest: destination
 * @n: number of characters of the source string
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len = strlen(dest);


	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[len + i] = *src;
		src++;
	}
	dest[len + i] = '\0';
	return (dest);
}
