#include "main.h"

/**
 * _strspn -  a function that gets the length of
 * a prefix substring.
 * @s: string
 * @accept: prefix substring
 * Return: length of prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, count, length = 0;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		count = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				count++;
				break;
				count = 1;
			}
			else if (accept[j + 1] == '\0')
				return (length);
		}
	}
	return (length);
}

