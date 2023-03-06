#include "main.h"

/**
 * *_memcpy - copies memory
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: number of times
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pdest = dest;
	char *psrc = src;

	while (n-- > 0)
	{
		*pdest++ = *psrc++;
	}

	return (dest);
}

