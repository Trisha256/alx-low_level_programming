#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * print_opcodes - ....
 * @num_bytes: .....
 *
 * Return: .....
 */

void print_opcodes(int num_bytes)
{
	unsigned char *opcode_ptr = (unsigned char *)print_opcodes;
	int i;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", tolower(opcode_ptr[i]));
	}
	printf("\n");
}

/**
 * main - ...
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: ....
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	int i = 0;
	int num_bytes = atoi(argv[i]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	print_opcodes(num_bytes);

	return (0);
}

