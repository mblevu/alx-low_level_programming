#include "main.h"

/**
 * _strcmp - absolute value
 * @s1: int tochange
 * @s2: int tochange
 * Return - absolute value
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
