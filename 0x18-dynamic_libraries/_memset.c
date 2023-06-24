#include "main.h"

/**
 * _memset - absolute value
 * @s: int tochange
 * @b: int tochange
 * @n: int tochange
 * Return - absolute value
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);    
}
