#include "main.h"
#include <stddef.h>

/**
 * *_strpbrk -  a function that searches a strig
 * for any of a set of bytes.
 * @s: string
 * @accept: input
 * Return: s, otherwise NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			return (s + i);
		}
	}

	return (NULL);
}
