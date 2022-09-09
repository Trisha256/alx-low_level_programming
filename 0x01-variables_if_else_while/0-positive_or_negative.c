#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - print if number is positive, negative or 0
*
* Description: using the main function
* this program prints "programming is positive, negative or zero
* Returns: 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
  /* your code goes there */
if (n > 0)
{
	prinif("%i is positive\n", n);
}
else if (n < 0)
{
	printif("%i is negative\n", n);
}
else if (n == 0)
{
	printif("%i is zero\n", n);
}
return (0);
}

