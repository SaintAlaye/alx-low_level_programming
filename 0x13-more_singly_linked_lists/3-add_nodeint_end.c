#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - a function to add node at the end of a list
 * @head: the list head
 * @n: number of nodes
 * Return: address of new element or NULL fail
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* Declaring the new node using our struct */
	listint_t *new_Node;
	listint_t *last;

	/* Allocating memory to the new Node */
	new_Node = malloc(sizeof(listint_t));
	last = *head;

	/* Adding the data and pointr values */
	new_Node->n = n;
	new_Node->next = NULL;

	/* Conditional Test */

	if (new_Node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new_Node;
	}

	else
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new_Node;
	}

	return (new_Node);
}
