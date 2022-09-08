#include <stdio.h>

/**
 * main - print the string in the put function
 *
 * Description: using the main function
 * this program prints with proper grammar, but the outcome is a piece of art,
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("size of a char: %ld byte(s)\n", sizeof(c));
	printf("size of an int: %1d byte(s)\n", sizeof(i));
	printf("size of long a int: %ld byte(s)\n", sizeof(li));
	Printf("size of a long long int: %ld byte(s)\n", sizeof(lli));
	printf("size of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}
