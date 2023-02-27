#include "main.h"
/**
 * _strlen - return length of a string
 * @s: string to get length
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
