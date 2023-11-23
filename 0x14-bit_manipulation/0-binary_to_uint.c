#include "main.h"

/**
 * binary_to_uint -  a function that converts a binary
 * number to an unsigned int.
 * @b: pointer pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int _result = 0;
	int p = 0;

	if (b == NULL)
		return (0);

	while (b[p] != '\0')
	{
		if (b[p] == '0')
		{
			_result = _result << 1;
		}
		else if (b[p] == '1')
		{
			_result = (_result << 1) | 1;
		}
		else
		{
			return (0);
		}
		p++;
	}
	return (_result);
}
