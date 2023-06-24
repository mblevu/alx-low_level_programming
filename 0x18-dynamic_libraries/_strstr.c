#include "main.h"

/**
 * _strstr - absolute value
 * @haystack: int tochange
 * @needle: int tochange
 * Return - absolute value
*/

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (haystack[i] != '\0')
	{
		int j = 0;
		while (haystack[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return (&haystack[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
