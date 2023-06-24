#include "main.h"

/**
 * strncpy - absolute value
 * @dest: int tochange
 * @src: int tochange
 * @n: int tochange
 * Return - absolute value
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
