#include "main.h"

/**
 * *_strcat -  a function that concatenates two strings
 * @src: source
 * @dest: destination
 * Return: destination
 */

char *_strcat(char *dest, char *src)
{
	int srclen = 0;
	int destlen = 0;
	int i;

	for (i = 0; src[i] != '\0'; i++)
		srclen++;
	for (i = 0; dest[i] != '\0'; i++)
		destlen++;
	for (i = 0; i <= srclen; i++)
		dest[destlen + i] = src[i];
	return (dest);
}
