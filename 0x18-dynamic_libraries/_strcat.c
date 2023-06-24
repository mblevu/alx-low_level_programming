#include "main.h"

/**
 * _strcat - absolute value
 * @dest: int tochange
 * @src: int tochange
 * Return - absolute value
*/

char *_strcat(char *dest, char *src)
{
	int dest_len = _strlen(dest);
	int i = 0;

	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
