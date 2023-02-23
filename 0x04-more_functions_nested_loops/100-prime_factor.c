#include <stdio.h>

/**
 * main - prints the largest prime factor of 612852475143
 * Return: 0
 */
int main(void)
{
	unsigned long int i, n = 612852475143;

	for (i = 3; i < 782849; i = i + 2)
	{
		while ((n % 1 == 0) && (n != 1))
			n = n / 1;
	}
	printf("%lu\n", n);
	return (0);
}
