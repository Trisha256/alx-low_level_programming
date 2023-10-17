#include "main.h"

/**
 * *_strcpy - a function that copies the string pointed to by src,
 * terminating null byte (\0), to the buffer pointed to by dest
 * @dest: destination
 * @src: source
 * Return: destination
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
return (dest);
}
