#include "lists.h"

/**
 * pop_listint - deletes head node
 * @head: double pointer to the head
 * Return:return data
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}
	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}
