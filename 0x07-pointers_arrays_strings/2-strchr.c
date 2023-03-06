#include "main.h"
#include <stddef.h>
/**
 * *_strchr - function to check for character
 * @s: pointer to the strng to search
 * @c: character to look for
 * Return:s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}

