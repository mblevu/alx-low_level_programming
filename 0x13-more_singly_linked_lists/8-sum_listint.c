#include "lists.h"

/**
 * sum_listint - computes the sum of all elements in a linked list
 * @head: a pointer to the head of the linked list
 * Return: the sum of all elements
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
