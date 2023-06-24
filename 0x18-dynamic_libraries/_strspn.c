#include "main.h"

/**
 * _strspn - absolute value
 * @s: int tochange
 * @accept: int tochange
 * Return - absolute value
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i = 0;

	while (s[i] != '\0' && _strchr(accept, s[i]) != NULL)
	{
		count++;
		i++;
	}
	return (count);
}
