#include "main.h"

/**
 * _strpbrk - absolute value
 * @s: int tochange
 * @accept: int tochange
 * Return - absolute value
*/

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (s[i] !='\0')
	{
		if (_strchr(accept, s[i]) != NULL)
			return(&s[i]);
		i++;
	}
	return (NULL);
}
