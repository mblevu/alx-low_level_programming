#include "hash_tables.h"

/**
 * key_index - function to get key index
 * @key: the key string to get
 * @size: size ofthe array
 * Return: index of the key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);
	unsigned long int index = hash_value % size;

	return (index);
}
