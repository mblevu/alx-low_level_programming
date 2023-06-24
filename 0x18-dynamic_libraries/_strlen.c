#include "main.h"

/**
 * _strlen - absolute value
 * @s: int tochange
 * Return - absolute value
*/

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}
