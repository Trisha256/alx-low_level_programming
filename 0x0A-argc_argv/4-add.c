#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - a program that adds positive numbers
 * @argc: argument count
 * @argv: array of arguments
 * @sum: addittion of digits
 * Return 0 (success)
 */

int main(int argc, char *argv[])
{
	int i, j; int sum = 0;

	for (i = 1; i < argc; i++)
	{
	for (j = 0; argv[i][j] != '\0'; j++)
	{
		if (!isdigit(argv[i][j]))
		{
		printf("Error\n");
		return (1);
		}
	}
	sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
