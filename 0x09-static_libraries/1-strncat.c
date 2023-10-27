#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * *_strncat - entry point
 * @dest: destination
 * @src: source
 * @n: integer
 * Return: dest, src, n
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
