#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: comparison of the two strings
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	for (; s1[i] != '\0'; i++)
	{
	for (; s2[i] != '\0'; i++)
	{
		if (s1[i] < s2[i])
		{
			return (-1);
		}
		else if (s1[i] > s2[i])
		{
			return (1);
		}
	}
	}
}
