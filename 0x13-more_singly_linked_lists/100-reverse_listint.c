#include "lists.h"

/**
 * reverse_listint - reverse list
 * @head: double pointer to the head node
 * Return: return head of the reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *first, *rest;

	if (*head == NULL || (*head)->next == NULL)
	{
		return (*head);
	}
	first = *head;
	rest = (*head)->next;

	reverse_listint(&rest);

	first->next->next = first;

	first->next = NULL;
	*head = rest;

	return (*head);

}
