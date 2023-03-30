#include <stdio.h>
/**
 * before_main - tells compiler to execute function before the main()
 */

void __attribute__ ((constructor)) before_main(void)
{
	printf("You're beat! yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

