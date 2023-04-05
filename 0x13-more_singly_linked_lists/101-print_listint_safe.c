#include "lists.h"

/**
 * print_listint_safe - prints a list safely
 * @head: pointer to head
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	const listint_t *slow, *fast;

	if (!head)
	{
		exit(98);
	}
	slow = fast = head;

	while (fast && fast->next)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		i++;

		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			printf("-> [%p] %d\n", (void *)fast->next, fast->next->n);
			i++;
			break;
		}
	}

	if (!fast || !fast->next)
	{
		while (slow)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			i++;
			slow = slow->next;
		}
	}

	return (i);
}
