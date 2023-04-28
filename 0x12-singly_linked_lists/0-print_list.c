#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements of a struct type list_t list.
 * @h: pointer to first member of a singly linked list of structs.
 * Return: amount of nodes in list.
 */

size_t print_list(const list_t *h)
{
	unsigned int nodes = 1;
	/* iterating through */
	if (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		if (h->next)
			nodes += print_list(h->next);

		return (nodes);
	}
	else
		return (0);
}
