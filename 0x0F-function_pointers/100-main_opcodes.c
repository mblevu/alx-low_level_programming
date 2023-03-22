#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - function to get opcodes
 * @num_bytes: number of bytes to print
 */

void print_opcodes(int num_bytes)
{
		char *main_ptr = (char *)print_opcodes;
		int i;
		for (i = 0; i < num_bytes; i++)
		{
			printf("%02x ", (unsigned char)main_ptr[i]);
		}
		printf("\n");
}

/**
 * main - entry point
 * @argc: argument coutn
 * @argv: argument vector
 * Return: return 0
 */

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error!!!\n");
		exit(1);
	}
	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error!!!\n");
		exit(2);
	}
	print_opcodes(num_bytes);

	return (0);
}

