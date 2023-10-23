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
	unsigned int i, j, count, length;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				length = 1;
			}
		}
	}
}

