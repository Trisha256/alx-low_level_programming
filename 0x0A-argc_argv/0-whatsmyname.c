#include <stdlib.h>
#include <stdio.h>

/**
 * main - program prints its name followed by a new line
 * @argc: number of arguments
 * @argv: array that contains the command lines
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
