#include "main.h"
/**
 * _strcpy - absolute value
 * @dest: int tochange
 * @src: int tochange
 * Return - absolute value
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
