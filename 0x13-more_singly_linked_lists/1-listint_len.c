#include "lists.h"

/**
 * listint_len - returns the number of number of elements
 * @h:pointer to head node of the list
 *
 * Return: number of nodes in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
