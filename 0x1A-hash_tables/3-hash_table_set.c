#include "hash_tables.h"

/**
 * hash_table_set - adds element to the hash table
 * @ht: hash table to add/update
 * @key: key string, cant be empty
 * @value: value associated with the key, can be empty
 * Return: 1 if succeeded, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;
	char *key_copy = strdup(key);
	char *value_copy;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (0);

	value_copy = (value != NULL) ? strdup(value) : NULL;

	if (key_copy == NULL || (value != NULL && value_copy == NULL))
	{
		free(new_node);
		free(key_copy);
		free(value_copy);
		return (0);
	}

	new_node->key = key_copy;
	new_node->value = value_copy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
