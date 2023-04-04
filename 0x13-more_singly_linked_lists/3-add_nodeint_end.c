#include "lists.h"

/**
 * add_nodeint_end - add node to end of list
 * @head: doubl pointer to head
 * @n: copy of value
 * Return: return new_node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;

	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	current = *head;

	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new_node;
	return (new_node);

}
