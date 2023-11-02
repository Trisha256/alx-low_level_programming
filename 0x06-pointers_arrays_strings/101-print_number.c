#include "main.h"

/**
 * print_number - a function that prints an integer.
 * @n: integer to be printed
 * Return: 0 (success)
 */

void print_number(int n)
{

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
		_putchar('0');

	if (n / 10)
	{
		_putchar(n / 10);

		_putchar(n % 10 + '0');
	}
}
