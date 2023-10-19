#include "main.h"
#include <string.h>

/**
 * *_strncat - a function that concatenates two strings
 * @src: source
 * @dest: destination
 * @n: number of characters of the source string
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[j] != '\0')
	{
		j++;
	}
	while (n > 0 && src[i] != '\0')
	{
		dest[j] = src[i];
			i++;
			j++;
			n--;
	}
	dest[j] = '\0';
	return (dest);
}
