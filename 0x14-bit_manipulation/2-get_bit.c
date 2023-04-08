#include "main.h"


/**
 * get_bit - returns value of a bit of given index
 * @n: integer to get bit
 * @index: check range of index
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (1);
	}

	return ((n & mask) != 0);
}
