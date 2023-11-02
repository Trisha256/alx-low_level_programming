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
	char *R;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k = 0;
	unsigned int l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (n >= j)
		l = i + j;
	else
		l = i + n;
	R = malloc(sizeof(char) * (l + 1));
	if (R == NULL)
		return (NULL);
	j = 0;
	while (k < l)
	{
		if (k <= i)
			R[k] = s1[k];
		if (k >= i)
		{
			R[k] = s2[j];
			j++;
		}
		k++;
	}
	R[k] = '\0';
	return (R);
}
