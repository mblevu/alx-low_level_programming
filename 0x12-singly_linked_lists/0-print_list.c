#include "lists.h"

/**
 * print_list - prints all elements of list_t
 * @h: pointer to the head of the linked list
 * Return: return i
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		i++;
		h = h->next;
	}

	return (i);
}

