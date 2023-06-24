#include "main.h"

/**
 * _strchr - absolute value
 * @s: int tochange
 * @c: int tochange
 * Return - absolute value
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	if (c == '\0')
		return (&s[i]);
	return (NULL);
}
