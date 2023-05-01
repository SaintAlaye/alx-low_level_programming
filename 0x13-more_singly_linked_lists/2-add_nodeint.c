#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * 2-add_nodeint - add a new node at the beginning of a list
 * @head: the list head
 * @n: number of element
 *
 * Return: the address of the new node or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/* declare the new node */
	listint_t *new_Node;

	/* Allocate memory for the new node using malloc */
	new_Node = malloc(sizeof(listint_t));

	/* conditional test */
	if (new_Node == NULL)
		return (NULL);

	/* setting it Data and next pointer values */
	new_Node->n = n; /* Data value */
	new_Node->next = *head; /* next pinter value */
	*head = new_Node;

	return (*head);
}
