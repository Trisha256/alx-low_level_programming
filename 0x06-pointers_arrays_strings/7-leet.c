#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* *leet -  a function that encodes a string into 1337
* @str: string to be encoded
* Return: str
*/

char *leet(char *str)
{
char *encoded = (char *)malloc(strlen(str) + 1);

int i;
int j;

(i = 0);
(j = 0);

for (; str[i] != '\0'; i++)
{
for (; j < 10; j++)
{
if (str[i] == encoded[j])
{
encoded[j] = str[i];
}
if (str[i] == 'a' || str[i] == 'A')
encoded[j] = '4';
else if (str[i] == 'e' || str[i] == 'E')
encoded[j] = '3';
else if (str[i] == 'o' || str[i] == 'O')
encoded[j] = '0';
else if (str[i] == 't' || str[i] == 'T')
encoded[j] = '7';
else if (str[i] == 'l' || str[i] == 'L')
encoded[j] = '1';
}
}
return (str);
}


