#include "lists.h"

/**
 * list_len - fucntion to get number of elements in list_t
 * @h: pointer to the head
 * Return: return len
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}

