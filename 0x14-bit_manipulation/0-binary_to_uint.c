#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to string of binary digits
 * Return: result of unsigned int
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int len = strlen(b);
	int i;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; i < len; i++)
	{
		if (b[i] == '1')
		{
			result = (result << 1) | 1;
		}
		else if (b[i] == '0')
		{
			result <<= 1;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
