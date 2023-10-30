#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup -  a function that returns a pointer to a
 * newly allocated space in memory
 * @str: string original
 * Return:  a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *s;

	size_t (len) = strlen(str);
	s = (char *)malloc((len + 1) * sizeof(char));
	{
	if (str == NULL)
		return (NULL);
	}
	{
		if (s == NULL)
			return (NULL);
	}
	strcpy(s, str);
	return (s);
}
