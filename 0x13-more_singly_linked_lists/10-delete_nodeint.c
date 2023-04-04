#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t linked list
 * @head: pointer to pointer to the first node of the list
 * @index: index of the node to delete
 *
 * Return: 1 if succeeded, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev_node, *node_to_delete;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		node_to_delete = *head;
		*head = (*head)->next;
		free(node_to_delete);
		return (1);
	}
	prev_node = *head;

	for (i = 0; i < index - 1 && prev_node->next != NULL; i++)
	{
		prev_node = prev_node->next;
	}
	if (i < index - 1 || prev_node->next == NULL)
	{
		return (-1);
	}
	node_to_delete = prev_node->next;
	prev_node->next = node_to_delete->next;
	free(node_to_delete);

	return (1);
}
