#include "main.h"

/**
*print_numberz - print 0123456789
* owned by Bwave ICT
*Return: void
*/

void print_numberz(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
