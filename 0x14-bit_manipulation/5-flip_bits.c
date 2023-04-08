#include "main.h"

/**
 * flip_bits - get no. of bits to flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: count which is number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff)
	{
		count += diff & 1;
		diff >>= 1;
	}

	return (count);
}
