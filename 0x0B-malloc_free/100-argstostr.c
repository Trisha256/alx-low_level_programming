#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *argstostr - a function that concatenates all the
 * arguments of your program.
 * @ac: argument count
 * @av: double pointer array of arguments
 * Return: concatenated string
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int i;
	int j;
	int k;
	int l;

	l = 0;
	k = 0;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			l++;
		}
		l++;
	}
	l += ac;
	s = (char *)malloc(sizeof(char) * l + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[k] = av[i][j];
				k++;
		}
		if (s[k] == '\0')
		{
			s[k++] = '\n';
		}
	}
	return (s);
}





