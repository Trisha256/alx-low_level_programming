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
	unsigned int i, j, count, length = 0;

	(i = 0);
	(j = 0);

		while (s[i] != '\0')
			i++;
		while (accept[j] != '\0')
			j++;
		{
			if (s[i] == accept[j])
			{
				count = 1;
				count++;
			}
			if (count == 0)
				return (length);
		}
			return (length);
}

