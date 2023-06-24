#include "main.h"

/**
 * _puts - absolute value
 * @s: int tochange
 * Return - absolute value
*/

void _puts(char *s)
{
	int i = 0;
	while (s[i] !=  '\0')
	{
		_putchar(s[i]);
		i++;
	}
}
