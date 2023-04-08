#include "main.h"

/**
 * clear_bit - sets value of a bit to 0 at given index
 * @n: pointer to integer
 * @index: index of bit to clear
 * Return: -1 upon failure and 1 upon success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = 1UL << index;
	*n &= ~mask;

	return (1);
}
