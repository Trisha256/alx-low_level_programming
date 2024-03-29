#include "main.h"
#include <stdio.h>

/**
 * *_memset - a function that fills memory with a constant byte.
 * @b: constant
 * @s: pointer
 * @n: byte size
 * Return: 0 (always)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
