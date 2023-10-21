#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* *leet -  a function that encodes a string into 1337
* @n: input to be encoded
* Return: n value
*/

char *leet(char *n)
{

int i;
int j;

char s1[] = "aAeEoOtTlL";
char s2[] = "4433007711";

for (i = 0; n[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (n[i] == s1[j])
{
n[i] = s2[j];
}
}
}
return (n);
}


