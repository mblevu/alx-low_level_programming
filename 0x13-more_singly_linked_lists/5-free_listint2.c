#include "lists.h"


/**
 * free_listint2 - free list
 * @head: double pointer to head
 * Return: return nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (head == NULL)
	{
		return;
	}
	current = *head;

	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
	*head = NULL;
}
