#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - ...
 * @argc: ...
 * @argv: ...
 *
 * Return: ...
 */

int main(int argc, char *argv[])
{
	int (*oprt)(int, int);
	int result;
	int num1;
	int num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	oprt = get_op_func(argv[2]);

	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (num2 == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error: Division by zero\n");
		return 3;
	}
	result = oprt(num1, num2);
		printf("%d\n", result);
		return 0;
}
