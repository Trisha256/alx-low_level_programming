#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * *_strchr - entry point
 * @s: string
 * @c: char
 * Return: s, c
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
