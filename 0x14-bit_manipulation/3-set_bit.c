#include "main.h"

/**
 * set_bit - sets value of bit to 1 at index
 * @n: pointer to number
 * @index: index of bit set
 * Return: -1 upon failure and 1 if works
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	for (p = 1; index > 0; index--, p *= 2)
	{
		;
	}
	*n += p;

	return (1);
}
