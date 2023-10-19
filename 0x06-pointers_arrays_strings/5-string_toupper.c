#include "main.h"
#include <stdio.h>

/**
 * *string_toupper -  a function that changes all lowercase
 * letters of a string to uppercase
 * @s: string to be converted
 * Return: uppercase
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)

		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 'a' + 'A';
		}
	i++;
	return (s);
}
