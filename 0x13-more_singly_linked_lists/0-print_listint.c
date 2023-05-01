#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_listint - print list.
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t nodenumber = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodenumber++;
	}
	return (nodenumber);
}

