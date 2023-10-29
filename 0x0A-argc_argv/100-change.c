#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0 (success)
 */

int main(int argc, char **argv)
{
	int cents;
	int mncoins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
	return (1);
	}
	cents = atoi(argv[1]);

	while (cents > 1)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		mncoins += 1;
	}
	printf("%d\n", mncoins);
	return (0);
}

