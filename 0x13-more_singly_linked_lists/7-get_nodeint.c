#include "lists.h"

/**
 * get_nodeint_at_index - get node at nth index
 * @head: pointer to head node
 * @index: index of the node to return startin at 0
 * Return: pointer to the node at specified index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i;

	for (i = 0; current != NULL && i < index; i++)
	{
		current = current->next;
	}
	return (current);
}
