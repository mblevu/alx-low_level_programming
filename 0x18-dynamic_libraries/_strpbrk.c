#include "main.h"

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
