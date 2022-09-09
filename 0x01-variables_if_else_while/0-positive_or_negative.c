#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * File: 0 - positive_or_neggative.c
 *
 */

/*
 * main - print if the number is positive, negative or 0.
 *
 * Description: using the main function
 * this prrogram prints "Programming is positive, zero or negative.
 * Return: Always 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;			
  /* your code goes there */
if (n > 0)
{
	printf("%d is positive/n", n);
}
else if (n < 0)
{
	printf("%d is negative/n", n);
}
else if (n == 0)
{
	printf("%d is zero/n", n);
}
return (0);
}
