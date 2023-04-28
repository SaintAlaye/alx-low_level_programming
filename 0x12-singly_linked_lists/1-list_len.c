#include "lists.h"

/**
 * list_len - counts elements of a struct type list_t linked list
 * @h: pointer to first member of singly linked list
 * Return: amount of nodes in list
 */

size_t list_len(const list_t *h)
{
	unsigned int nodes = 1;
	/* iterating through */
	if (h)
	{
		if (h->next)
			nodes += list_len(h->next);

		return (nodes);
	}
	else
		return (0);
}
