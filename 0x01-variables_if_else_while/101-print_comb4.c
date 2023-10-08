#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: 0 (success)
 */

int main(void)
{

	int b, f, g;

	for (b = '0'; b < '9'; b++)
	{
	for (f = b + 1; f <= '9'; f++)
	{
	for (g = f + 1; g <= '9'; g++)
	{
	if ((f != b) != g)
	{
	putchar(b);
	putchar(f);
	putchar(g);
	if (b == '7' && f == '8')
		continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
