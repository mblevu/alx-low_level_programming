#include "main.h"

/**
 * _memcpy - absolute value
 * @dest: int tochange
 * @src: int tochange
 * @n: int tochange
 * Return - absolute value
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
