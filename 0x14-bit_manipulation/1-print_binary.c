#include "main.h"

/**
 * print_binary - print binary of a number
 * @n: unsigned long int
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int bits;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (mask = n, bits = 0; (mask >>= 1) > 0; bits++)
		;
	for (; bits >= 0; bits--)
	{
		if ((n >> bits) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
