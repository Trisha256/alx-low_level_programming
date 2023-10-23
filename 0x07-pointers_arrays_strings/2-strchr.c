#include "main.h"
#include <stddef.h>

/**
 * *_strchr - a function that locates a character in a string
 * @s: string
 * @c: character to located
 * Return: s, otherwise NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	(i = 0);
	while (s[i] != '\0' && s[i] != c)
		i++;
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
