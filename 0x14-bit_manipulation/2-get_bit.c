#include "main.h"


/**
 * get_bit - returns value of a bit of given index
 * @n: integer to get bit
 * @index: check range of index
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index > 64)
	{
		return (-1);
	}
	mask = n >> index;

	return (mask & 1);
}
