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
	char *duplicate;
	size_t len;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
	duplicate = (char *)malloc((len + 1) * sizeof(char));

		if (duplicate == NULL)
			return (NULL);
	strcpy(duplicate, str);
	return (duplicate);
}
