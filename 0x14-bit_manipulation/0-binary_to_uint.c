#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to string of binary digits
 * Return: result of unsigned int
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int len, i;

	if (b == NULL)
	{
		return (0);
	}
	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
	}
	for (i = 1, result = 0, len--; len >= 0; len--, i *= 2)
	{
		if (b[len] == '1')
			result += i;
	}

	return (result);
}
