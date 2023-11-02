#include "main.h"
#include <string.h>

/**
 * *string_nconcat - a function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: size of string 2
 * Return: pointer to the memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	size_t s1_len = strlen(s1);
	size_t s2_len = strlen(s2);
	size_t result_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= s2_len)
		n = s2_len;
	result_len = s1_len + n;
	result = (char *)malloc((result_len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	strncpy(result, s1, s1_len);
	strncpy(result + s1_len, s2, n);
	result[result_len] = '\0';

	return (result);
}
