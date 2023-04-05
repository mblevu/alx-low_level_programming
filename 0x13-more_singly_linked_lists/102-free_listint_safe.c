#include "lists.h"

/**
 * free_listint_safe - frees list safely
 * @h: pointer to head node
 * Return: number of nodes freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	listint_t *current, *next;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}
	current = *h;
	*h = NULL;

	while (current != NULL)
	{
		if (next >= current)
		{
			break;
		}
		i++;
		next = current->next;
		free(current);
		current = next;
	}

	return (i);
}
