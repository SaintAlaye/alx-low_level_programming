#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * listint_len - print the number of element in a list
 * @h: Head of a linked list
 * Return: Number of element
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
