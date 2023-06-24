#include "main.h"

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
